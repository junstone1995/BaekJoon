import Foundation

let input = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
let n = input[0]
let m = input[1]
let h = input[2]
var map = Array(repeating: Array(repeating: 0, count: 12), count: 32)
var ret = 4

func check() -> Bool{
    var ret = true

    for i in 1...n{
        var pos = i

        for j in 0...h{
            if map[j][pos] == 1{
                pos += 1
            }else if (map[j][pos - 1] == 1){
                pos -= 1
            }
        }

        if pos != i{
            ret = false
            return ret
        }
    }
    return ret
}

func dfs(_ count:Int, _ y:Int, _ x:Int){
    var x = x
    if count >= ret{
        return
    }
    if check(){
        ret = count
        return
    }
    if count == 3{
        return
    }
    for i in y...h{
        for j in x..<n{
            if map[i][j] == 0 && map[i][j - 1] == 0 && map[i][j+1] == 0{
                map[i][j] = 1
                dfs(count + 1, i , j)
                map[i][j] = 0
            }
        }
        x = 1
    }
}

func solve(){
    for _ in 0..<m{
        let arr = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
        let a = arr[0],b = arr[1]
        map[a][b] = 1;
    }

    dfs(0, 1, 1)
    if ret == 4{
        ret = -1
    }
    print(ret)
}

solve()
