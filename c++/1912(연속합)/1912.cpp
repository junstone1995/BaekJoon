#include <iostream>

using namespace std;

int main()
{

    int n,maxNum;
    int ret[100001];
    int dp[100001];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ret[i];
        dp[i] = ret[i];
    }
    maxNum = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i],dp[i -1] + ret[i]);
            if (dp[i] > maxNum)
            maxNum = dp[i];
    }
    cout << maxNum << '\n';
}
