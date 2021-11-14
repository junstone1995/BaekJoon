import Foundation

var stackL = readLine()!
var stackR = ""
var num = Int(readLine()!)!

for _ in 0..<num{
    let command = readLine()!

    switch command{
    case "L":
        if !stackL.isEmpty{
            stackR.append(stackL.removeLast())
        }
    case "D":
        if !stackR.isEmpty{
            stackL.append(stackR.removeLast())
        }
    case "B":
        if !stackL.isEmpty{
            stackL.removeLast()
        }
    default :
        stackL.append(command.last!)
    }
}

print(stackL + stackR.reversed())
