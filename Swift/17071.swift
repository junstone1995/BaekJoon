import Foundation

let input = readLine()!.split(separator: " ").map{ Int(String($0))!}
var n = input[0], m = input[1]

var check:[[Bool]] = Array(repeating: Array(repeating: false, count: 2), count: 500001)

func bfs() -> Int{
    var q:[Int] = []
    q.append(n)
    check[n][0] = true
    var time = 1
    if n == m{
        return 0
    }
    while !q.isEmpty{
        var qSize = q.count
        m += time
        if 500000 < m {
            return -1
        }

        for _ in 0..<qSize{
            var here = q.removeFirst()
            var there:Int?


            for i in 0..<3{
                if i == 0 {
                    there = here - 1
                }else if i == 1{
                    there = here + 1
                }else{
                    there = here * 2
                }

                if (0 <= there! && there! <= 500000 && !check[there!][time % 2]){
                    check[there!][time % 2] = true
                    q.append(there!)
                }
            }
        }
        if check[m][time % 2]{
            return time
        }
        time += 1
    }
    return -1
}

print(bfs())
