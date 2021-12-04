import Foundation

let n = Int(readLine()!)!

var arr = readLine()!.split(separator: " ").map{ Int(String($0))!}.sorted()

var ans = Array(repeating: 0, count: 2)
var left = 0
var right = n - 1
var min = 2000000000
while left < right{
    let sum:Int = arr[left] + arr[right]

    if min > abs(sum){
        min = abs(sum)
        ans[0] = arr[left]
        ans[1] = arr[right]

        if sum == 0{
            break
        }
    }

    if sum < 0 {
        left += 1
    }else{
        right -= 1
    }
}

print("\(ans[0]) \(ans[1])")
