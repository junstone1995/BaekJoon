import Foundation


extension Character{
    var ascii: Int{
        return Int(self.asciiValue!)
    }

    var isAlphabet: Bool{
        let ascii = self.ascii
        return ascii >= 65 && ascii <= 92
    }
}

let num = Int(readLine()!)!
let str = Array(readLine()!)
var number:[Double] = []
for _ in 0..<num{
    number.append(Double(readLine()!)!)
}

var stack:[Double] = []
for i in 0..<str.count{
    if str[i].isAlphabet{
        stack.append(number[str[i].ascii - 65])
    }else{
        let second = stack.removeLast()
        let first = stack.removeLast()
        switch str[i]{
        case "+":
            stack.append(first + second)
        case "-":
            stack.append(first - second)
        case "*":
            stack.append(first * second)
        case "/":
            stack.append(first / second)
        default:
            break
        }
    }
}

let answer = String(format: "%.2f", stack.first!)
print(answer)
