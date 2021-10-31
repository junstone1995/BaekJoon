import Foundation

var str = readLine()!
var ret = ""
var oper = ""

for char in str{
    if char == "("{
        oper.append("(")
    } else if char == ")"{
        while let opr = oper.popLast(){
            guard opr != "(" else { break }
            ret.append(opr)
        }
    } else if char == "*" || char == "/"{
        guard !oper.isEmpty else { oper.append(char); continue}

        while let opr = oper.last, (opr == "*" || opr == "/"){
            ret.append(oper.popLast()!)
        }
        oper.append(char)
    } else if char == "+" || char == "-"{
        guard !oper.isEmpty else { oper.append(char); continue}

        while let opr = oper.popLast() {
            guard opr != "(" else { oper.append(opr); break}
            ret.append(opr)
        }
        oper.append(char)
    }else {
        ret.append(char)
    }
}

print(ret + oper.reversed())
