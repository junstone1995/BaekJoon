import Foundation

let input = readLine()!.split(separator: " ").map{ Int(String($0))!}
let n = input[0], c = input[1]

var house:[Int] = []

for _ in 0..<n{
    let num = Int(readLine()!)!
    house.append(num)
}

house = house.sorted()

var left = 1
var right = house.last! - house.first!

func isTrue(dist:Int) -> Bool{
    var cnt = 1
    var prev = 0
    for i in 1..<house.count{
        if house[i] - house[prev] >= dist{
            cnt += 1
            prev = i
        }
    }

    return cnt >= c
}

var maxDist = 1
while left <= right{
    let mid = (left + right) / 2
    if isTrue(dist: mid){
        maxDist = max(maxDist, mid)
        left = mid + 1
    }else{
        right = mid - 1
    }
}

print(maxDist)
