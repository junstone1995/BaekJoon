import Foundation

var n = Int(readLine()!)!
var map:[[Int]] = []
var answer:Int = 2147483647
for _ in 0..<n{
    let arr = readLine()!.components(separatedBy: " ").map{ Int(String($0))!}
    map.append(arr)
}

var check = Array(repeating: false, count: 21)

for i in 2..<n - 1{
    divideTeam(0, 0, i)
}



func divideTeam(_ idx:Int, _ cnt:Int, _ target:Int){
    if cnt == target{
        PowerCheck()
        return
    }

    for i in idx..<n{
        if check[i]{
            continue
        }
        check[i] = true
        divideTeam(i + 1, cnt + 1, target)
        check[i] = false
    }
}

func PowerCheck(){
    var Star:[Int] = []
    var Link:[Int] = []
    var StarPower = 0, LinkPower = 0

    for i in 0..<n{
        if check[i]{
            Star.append(i)
        }else{
            Link.append(i)
        }
    }

    for i in 0..<Star.count{
        for j in i+1..<Star.count{
            StarPower += map[Star[i]][Star[j]] + map[Star[j]][Star[i]]
        }
    }

    for i in 0..<Link.count{
        for j in i+1..<Link.count{
            LinkPower += map[Link[i]][Link[j]] + map[Link[j]][Link[i]]
        }
    }

    answer = min(answer, abs(StarPower - LinkPower))
}

print(answer)
