import Foundation

var num = Int(readLine()!)!

for _ in 0..<num{
    var ret = ""
    let arr = readLine()!.components(separatedBy: " ").map{String($0.reversed())}
    for i in 0..<arr.count{
        if i == arr.count - 1{
            ret += arr[i]
            break
        }
        ret = ret + arr[i] + " "
    }
    print(ret)
}
