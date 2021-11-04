import Foundation

let input = readLine()!.components(separatedBy: " ").map{ Double(String($0))!}

let n = input[0], l = input[1], w = input[2], h = input[3]

var s:Double = 0 , e = max(l ,max(w , h))

func check(_ mid: Double) -> Bool{
    if floor(l / mid) * floor(w / mid) * floor(h / mid) < n{
        return false
    }
    return true
}

for _ in 0..<10000{
    let mid: Double = (s + Double(e)) / 2

    if check(mid){
        s = mid
    }else{
        e = mid
    }
}

print(String(format: "%.15lf",s))
