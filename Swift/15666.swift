import Foundation

var input = readLine()!.split(separator: " ").map{Int(String($0))!}
var n = input[0], m = input[1]
var visited:[Int] = Array(repeating: 0, count: 8)
var ret:String = ""
input = readLine()!.split(separator: " ").map{Int(String($0))!}.sorted()

func solve(_ cnt: Int, _ start: Int){
    if cnt == m{
        for i in 0..<m{
            ret += "\(visited[i]) "
        }
        ret = ret + "\n"
        return
    }

    var prev_num = -1

    for i in start..<n{
        if prev_num != input[i]{
            visited[cnt] = input[i]
            prev_num = input[i]
            solve(cnt + 1, i)
        }
    }
}

solve(0,0)
print(ret)
