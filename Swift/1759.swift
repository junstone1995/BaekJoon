import Foundation

let input = readLine()!.split(separator: " ").map{ Int(String($0))!}
let L = input[0], C = input[1]
let str = readLine()!.split(separator: " ").sorted()
var check = Array(repeating: true, count: C)
var vowel = Set<Character>("aeiou")
var ret = ""
func dfs(_ index:Int)
{
    guard ret.count != L else{
        let cntofVowel = vowel.intersection(ret).count
        if cntofVowel >= 1, ret.count - cntofVowel >= 2{
            print(ret)
        }
        return
    }

    for i in index..<str.count where check[i]{
        check[i] = false
        ret.append(contentsOf: str[i])
        dfs(i + 1)
        check[i] = true
        ret.popLast()
    }
}

dfs(0)
