import Foundation

let dx = [0, 0, 1, -1]
let dy = [1, -1, 0, 0]
let col = 6
let row = 12
var idx = 1

func makeMap(_ col:Int, _ row:Int) -> [[String]]{
    var map = Array(repeating: Array(repeating: ".", count: col), count: row)

    for i in 0..<row{
        let arr = Array(readLine()!)
        for j in 0..<arr.count{
            map[i][j] = String(arr[j])
        }
    }
    return map
}

func dfs(_ map:[[String]],_ check:inout [[Bool]], _ x:Int, _ y:Int, _ color:String){
    check[x][y] = true

    for i in 0..<4{
        let nx = x + dx[i]
        let ny = y + dy[i]

        if nx >= 0 && ny >= 0 && nx < row && ny < col{
            if !check[nx][ny] && color == map[nx][ny]{
                idx += 1
                dfs(map, &check, nx, ny, color)
            }
        }
    }
}

func remove(_ map:inout [[String]], _ check: [[Bool]]){
    for i in 0..<row{
        for j in 0..<col{
            if check[i][j]{
                map[i][j] = "."
            }
        }
    }
}

func fall(_ map:inout [[String]]){
    for j in 0..<col{
        while true{
            var ok = false
            for i in (1..<row).reversed(){
                if map[i][j] == "." && map[i - 1][j] != "."{
                    map[i][j] = map[i - 1][j]
                    map[i - 1][j] = "."
                    ok = true
                }
            }
            if !ok{
                break
            }
        }
    }
}

func solve(){
    var map = makeMap(col, row)
    var result = 0
    while true{
        var clear = false
        for i in (0..<row).reversed(){
            for j in 0..<col{
                idx = 1
                var check = Array(repeating: Array(repeating: false, count: col), count: row)
                if (map[i][j] != "."){
                    dfs(map, &check, i, j, map[i][j])
                    if idx >= 4{
                        clear = true
                        remove(&map, check)
                    }
                }
            }
        }
        if !clear{
            break
        }
        fall(&map)
        result += 1
    }
    print(result)
}

solve()
