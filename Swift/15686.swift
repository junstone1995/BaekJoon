import Foundation

let input = readLine()!.split(separator: " ").map{ Int(String($0))!}
let n = input[0], m = input[1]

var map:[[Int]] = []

for _ in 0..<n{
    let num = readLine()!.split(separator: " ").map{ Int(String($0))!}

    map.append(num)
}

typealias point = (r: Int, c: Int)
var house:[point] = []
var chicken:[point] = []

for r in 0..<map.count{
    for c in 0..<map[0].count{
        if map[r][c] == 1{
            house.append(point(r: r, c: c))
        }else if map[r][c] == 2{
            chicken.append(point(r: r, c: c))
        }
    }
}

var selected = Array(repeating: false, count: chicken.count)
var minDist = Int.max

func selectChicken(idx: Int, selectCnt:Int){
    if selectCnt == m{
        minDist = min(minDist, findDist())
    }
    if idx >= selected.count {
        return ;
    }
    selected[idx] = true
    selectChicken(idx: idx + 1, selectCnt: selectCnt + 1)
    selected[idx] = false
    selectChicken(idx: idx + 1, selectCnt: selectCnt)
}

func findDist() -> Int{
    var minDist = 0
    for home in house{
        var dist = Int.max
        for (idx, chicken) in chicken.enumerated(){
            if selected[idx]{
                dist = min(dist, abs(home.r - chicken.r) + abs(home.c - chicken.c))
            }
        }
        minDist += dist
    }
    return minDist
}

selectChicken(idx: 0, selectCnt: 0)
print(minDist)
