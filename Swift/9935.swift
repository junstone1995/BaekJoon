import Foundation

var input = readLine()!.map{ String($0) }
var boom = readLine()!.map{ String($0) }
var answer:[String] = []

for i in input{
    answer.append(i)
    if i == boom.last{
        if boom.count <= answer.count{
            var check = true
            for i in 0..<boom.count{
                if boom[boom.count - 1 - i] != answer[answer.count - 1 - i]{
                    check = false
                    break
                }
            }
            if check{
                for _ in 0..<boom.count{
                    answer.removeLast()
                }
            }
        }
    }
}

if answer.isEmpty{
    print("FRULA")
}else{
    var answerString = ""
    for i in 0..<answer.count{
        answerString += answer[i]
    }
    print(answerString)
}
