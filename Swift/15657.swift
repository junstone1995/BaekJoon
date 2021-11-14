import Foundation

var input = readLine()!.split(separator: " ").map{Int(String($0))!}
var n = input[0], m = input[1]
var visited:[Int] = Array(repeating: 0, count: 8)
var ret:String = ""
input = readLine()!.split(separator: " ").map{Int(String($0))!}

input = input.sorted(by: <)

func solve(_ idx:Int, _ start: Int, _ cnt: Int){
    if cnt == m{
        for i in 0..<m{
            ret += "\(input[visited[i]]) "
        }
        ret = ret + "\n"
    }

    if idx == n{
        return
    }

    for i in start..<n{
        visited[idx] = i
        solve(idx + 1, i, cnt + 1)
    }
}

solve(0,0,0)
print(ret)
