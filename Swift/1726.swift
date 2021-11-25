import Foundation

final class FileIO {
    private let buffer:[UInt8]
    private var index: Int = 0

    init(fileHandle: FileHandle = FileHandle.standardInput) {

        buffer = Array(try! fileHandle.readToEnd()!)+[UInt8(0)] // 인덱스 범위 넘어가는 것 방지
    }

    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }

        return buffer[index]
    }

    @inline(__always) func readInt() -> Int {
        var sum = 0
        var now = read()
        var isPositive = true

        while now == 10
                || now == 32 { now = read() } // 공백과 줄바꿈 무시
        if now == 45 { isPositive.toggle(); now = read() } // 음수 처리
        while now >= 48, now <= 57 {
            sum = sum * 10 + Int(now-48)
            now = read()
        }

        return sum * (isPositive ? 1:-1)
    }

    @inline(__always) func readString() -> String {
        var now = read()

        while now == 10 || now == 32 { now = read() } // 공백과 줄바꿈 무시
        let beginIndex = index-1

        while now != 10,
              now != 32,
              now != 0 { now = read() }

        return String(bytes: Array(buffer[beginIndex..<(index-1)]), encoding: .ascii)!
    }

    @inline(__always) func readByteSequenceWithoutSpaceAndLineFeed() -> [UInt8] {
        var now = read()

        while now == 10 || now == 32 { now = read() } // 공백과 줄바꿈 무시
        let beginIndex = index-1

        while now != 10,
              now != 32,
              now != 0 { now = read() }

        return Array(buffer[beginIndex..<(index-1)])
    }
}

let fIO = FileIO()

let m = fIO.readInt(), n = fIO.readInt()
let dx = [0,0,1,-1]
let dy = [1,-1,0,0]
var map:[[Int]] = []
var check = Array(repeating: Array(repeating: Array(repeating: false, count: 4), count: n), count: m)
for _ in 0..<m{
    var arr:[Int] = []
    for _ in 0..<n{
        let num = fIO.readInt()
        arr.append(num)
    }
    map.append(arr)
}

let sx = fIO.readInt() - 1, sy = fIO.readInt() - 1, sd = fIO.readInt() - 1
let ex = fIO.readInt() - 1, ey = fIO.readInt() - 1, ed = fIO.readInt() - 1
check[sx][sy][sd] = true

func solution() -> Int{

    var q:[(Int,Int,Int,Int)] = []
    q.append((sx, sy, sd, 0))

    while !q.isEmpty{
        let arr = q.removeFirst()
        let x = arr.0
        let y = arr.1
        var d = arr.2
        var cnt = arr.3
        if y == ey && x == ex && d == ed{
            return cnt
        }

        for i in 1...3{
            if isValidGo(x,y,d,i){
                var nx = x + dx[d] * i
                var ny = y + dy[d] * i

                if check[nx][ny][d]{
                    continue
                }
                if check[nx][ny][d] == false{
                    check[nx][ny][d] == true
                    q.append((nx,ny,d,cnt + 1))
                }
            }
        }

        var nd = turn(d, "L")
        if check[x][y][nd] == false{
            check[x][y][nd] = true
            q.append((x,y,nd,cnt + 1))
        }
        nd = turn(d, "R")
        if check[x][y][nd] == false{
            check[x][y][nd] = true
            q.append((x,y,nd,cnt + 1))
        }
    }
    return 0
}

func turn(_ direction: Int, _ c: String) -> Int{
    if c == "L"{
        if direction == 0{
            return 3
        }else if direction == 1{
            return 2
        }else if direction == 2{
            return 0
        }else{
            return 1
        }
    }else if c == "R"{
        if direction == 0{
            return 2
        }else if direction == 1{
            return 3
        }else if direction == 2{
            return 1
        }else{
            return 0
        }
    }
    return 0
}

func isValidGo(_ x:Int, _ y:Int, _ d:Int, _ k:Int) -> Bool{
    var nx = x + dx[d] * k
    var ny = y + dy[d] * k

    if nx < 0 || ny < 0 || nx >= m || ny >= n{
        return false
    }
    nx = x
    ny = y

    for _ in 0..<k{
        nx = nx + dx[d]
        ny = ny + dy[d]

        if map[nx][ny] == 1{
            return false
        }
    }
    return true
}

print(solution())
