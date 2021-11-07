import Foundation

let input = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
let n = input[0], m = input[1], x = input[2]

var map:[[Int]] = []

for _ in 0..<n{
    let arr = readLine()!.components(separatedBy: " ").map{ Int(String($0))!}
    map.append(arr)
}

map.append(Array(repeating: 0, count: m))
var result = 0


var archers:[Int] = []

func addArcher(_ current: Int){
    guard archers.count < 3 else{
        let attackPoint = play()
        if result < attackPoint{
            result = attackPoint
        }
        return
    }

    guard current < m else { return }
    archers.append(current)
    addArcher(current + 1)
    archers.removeLast()
    addArcher(current + 1)
}

func play() -> Int{
    var playInMap = map
    var attackPoint = 0
    var attackRow = n
    var attcked: [(Int, Int)] = []

    while attackRow > 0{
        for archer in archers{
            for point in isValid(attackRow, archer){
                if playInMap[point.0][point.1] == 1{
                    attcked.append(point)
                    break
                }
            }
        }
        while !attcked.isEmpty{
            let point = attcked.popLast()!
            if playInMap[point.0][point.1] == 1{
                playInMap[point.0][point.1] = 0
                attackPoint += 1
            }
        }
        attackRow -= 1
    }
    return attackPoint
}

func isInRange(_ row:Int,_ col:Int) -> Bool{
    return 0..<n ~= row && 0..<m ~= col
}

func isValid(_ attackRow: Int, _ archer: Int) -> [(Int, Int)]{
    guard x > 1 else { return [(attackRow - 1, archer)]}
    var validPoints = [(attackRow - 1, archer)]
    let distance = x

    for d in 2...distance{
        (archer - (d - 1)...archer + (d - 1)).forEach{ col in
            let colDistance = abs(archer - col)
            let row = attackRow - ( d - colDistance)
            if isInRange(row, col){
                validPoints.append((row, col))
            }
        }
    }
    return validPoints
}

addArcher(0)
print(result)
