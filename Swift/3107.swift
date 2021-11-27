import Foundation

var input = readLine()!
var idx = input.split(separator: ":").map{ String($0)}
var num = idx.count
var numArray = Array(input)
var cnt = 0
var ret = ""
var check = false
for i in 0..<numArray.count{
    if i == 0 && numArray[i] == ":" && numArray[i+1] == ":"{
        check = true
        break
    }
    if numArray[i] == ":"{
        cnt += 1
        if numArray[i + 1] == ":"{
            check = true
            if check == true && cnt == 7{
                cnt += 1
            }
            break
        }
    }
}
for i in 0..<idx.count{
    if i == cnt && check == true{
        for _ in idx.count..<8{
            ret += "0000:"
        }
    }
    while idx[i].count < 4{
        idx[i] = "0" + idx[i]
    }
    if i == idx.count - 1{
        ret += idx[i]
    }else{
        ret += idx[i] + ":"
    }
}

if cnt == 8{
    ret += ":0000"
}
print(ret)
