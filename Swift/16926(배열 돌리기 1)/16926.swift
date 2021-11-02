import Foundation

let input = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
let row = input[0], col = input[1], r = input[2]

var arr:[[Int]] = []
for _ in 0..<row{
    let input = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
    arr.append(input)
}

var check = Array(repeating: Array(repeating: false, count: col), count: row)
var list:[[Int]] = [[]]
var (i,j) = (0,0)

// 동, 북, 서, 남 (반 시계 방향)
let dir = [(1,0), (0,1), (-1, 0), (0, -1)]

var k = 0

while !check[i][j]{
    check[i][j] = true
    list[list.count - 1].append(arr[i][j])
    var n = (i + dir[k].0, j + dir[k].1)
    if n.0 >= row || n.1 >= col || n.0 < 0 || n.1 < 0{
        k = k == 3 ? 0 : k + 1
        n = (i + dir[k].0, j + dir[k].1)
    }else{
        if check[n.0][n.1]{
            k = k == 3 ? 0 : k + 1
            n = (i + dir[k].0, j + dir[k].1)
            if k == 0{
                list.append([])
            }
        }
    }
    i = n.0
    j = n.1
}

var path:[Int] = []
for i in list.indices{
    let cnt = list[i].count
    var new = Array(repeating: 0, count: cnt)
    for j in list[i].indices{
        new[(j + r) % cnt] = list[i][j]
    }
    path.append(contentsOf: new)
}

i = 0
j = 0
k = 0
var idx = 0

while check[i][j]{
    check[i][j] = false
    arr[i][j] = path[idx]
    var n = (i + dir[k].0, j + dir[k].1)
    if n.0 >= row || n.1 >= col || n.0 < 0 || n.1 < 0{
        k = k == 3 ? 0 : k + 1
        n = (i + dir[k].0, j + dir[k].1)
    }else{
        if !check[n.0][n.1]{
            k = k == 3 ? 0 : k + 1
            n = (i + dir[k].0, j + dir[k].1)
        }
    }
    i = n.0
    j = n.1
    idx += 1
}

var ans = ""
arr.forEach {
    $0.forEach{
        ans += "\($0) "
    }
    ans += "\n"
}
ans.removeLast()
print(ans)
