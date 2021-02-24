#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str1,str2;
    int dp[1001][1001];

    cin >> str1 >> str2;
    for(int i = 1; i <= str1.size();i++)
        for(int j = 1; j<= str2.size();j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    cout << dp[str1.size()][str2.size()] << '\n';
}
