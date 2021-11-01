import Foundation

for _ in 0..<Int(readLine()!)!{
        let _ = readLine()
        let coin = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
        let m = Int(readLine()!)!
        var dp = Array(repeating: 0, count: m + 1)
        dp[0] = 1

        for i in 0..<coin.count{
            var j = coin[i]
            while j <= m{
                dp[j] += dp[j - coin[i]]
                j += 1
            }
        }
        print(dp[m])
}
