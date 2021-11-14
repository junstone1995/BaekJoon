import Foundation

let a = readLine()

if let a = a{
    var num = Int(a)!
    let half = a.count / 2
    var suffix = 0
    var prefix = 0
    var cnt = 0

    while num > 0{
        if cnt < half{
            suffix += num % 10
            num /= 10
            cnt += 1
        }else{
            prefix += num % 10
            num /= 10
            cnt += 1
        }
    }
    let ret = prefix == suffix ? "LUCKY" : "READY"
    print(ret)
}
