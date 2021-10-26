import Foundation

var n = Int(readLine()!)!
var map = Array(repeating: Array(repeating: 0, count: n + 1), count: n + 1)
var info:[(Int, String)] = []
let dx = [0,1,0,-1]
let dy = [1,0,-1,0]
var direction = 0
var l = Int(readLine()!)!
//사과 위치 저장
for _ in 0..<l{
    let arr = readLine()!.components(separatedBy: " ").map{ Int($0)!}
    map[arr[0]][arr[1]] = 1
}
l = Int(readLine()!)!
//방향 변경 정보 저장
for _ in 0..<l{
    let arr = readLine()!.components(separatedBy: " ")
    let x = Int(arr[0])!
    let c = String(arr[1])
    info.append((x, c))
}

func solution()->Int{
    var x = 1
    var y = 1
    map[x][y] = 2
    var time = 0
    var index = 0
    var q:[(Int,Int)] = [(x,y)]
    while true{
        let nx = x + dx[direction]
        let ny = y + dy[direction]
        if 1 <= nx && nx <= n && 1 <= ny && ny <= n && map[nx][ny] != 2{
            if map[nx][ny] == 0{
                map[nx][ny] = 2
                q.append((nx, ny))
                let tmp = q.removeFirst()
                map[tmp.0][tmp.1] = 0
            }
            if map[nx][ny] == 1{
                map[nx][ny] = 2
                q.append((nx, ny))
            }
        }else{
            time += 1
            break
        }
        x = nx
        y = ny
        time += 1
        if index < info.count && time == info[index].0{
            direction = turn(info[index].1)
            index += 1
        }
    }
    return time
}


func turn(_ c : String) -> Int {
    if c == "L"{
        if direction == 0{
            direction = 3
        }else if direction == 1{
            direction = 0
        }else if direction == 2{
            direction = 1
        }else if direction == 3{
            direction = 2
        }
    }else if c == "D"{
        if direction == 0{
            direction = 1
        }else if direction == 1{
            direction = 2
        }else if direction == 2{
            direction = 3
        }else if direction == 3{
            direction = 0
        }
    }
    return direction
}

print(solution())
