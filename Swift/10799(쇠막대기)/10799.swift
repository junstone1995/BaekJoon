import Foundation

func solution(_ text:String) -> Int{
    let str = text.map(){String($0)}
    var linecnt: Int = 0
    var ret: Int = 0

    for i in 0..<str.count{
        if str[i] == "("{
            linecnt += 1
        }else if str[i - 1] == "("{
            linecnt -= 1
            ret += linecnt
        } else{
            linecnt -= 1
            ret += 1
        }
    }
    return ret
}

print(solution(readLine()!))
