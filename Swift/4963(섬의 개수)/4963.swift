import Foundation

let dx:[Int] = [0,0,-1,1,-1,1,-1,1]
let dy:[Int] = [-1,1,0,0,-1,-1,1,1]

while true{
    var count = 0
    var map:[[Int]] = []
    let num = readLine()!
    if num == "0 0"{
        break
    }
    let arr = num.components(separatedBy: " ")
    let h = Int(arr[1])!
    let w = Int(arr[0])!
    for _ in 0..<h{
        let number = readLine()!.components(separatedBy: " ").map{ Int($0)! }
            map.append(number)
    }

    var visited:[[Bool]] = [[Bool]](repeating: [Bool](repeating: false, count: w), count: h)

    func DFS(_ x:Int, _ y :Int){
        for i in 0..<dx.count{
            let nx = x+dx[i]
            let ny = y+dy[i]

            if nx < 0 || nx > w - 1 || ny < 0 || ny > h - 1{
                continue
            }else{
                if !visited[ny][nx] && map[ny][nx] == 1{
                    visited[ny][nx] = true
                    DFS(nx,ny)
                }
            }
        }
    }

    for i in 0..<h{
        for j in 0..<w{
            if map[i][j] == 1 && !visited[i][j]{
                visited[i][j] = true
                DFS(j,i)
                count += 1
            }
        }
    }
    print(count)
}
