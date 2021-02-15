#include <iostream>

using namespace std;

int main()
{
    int n;
    long long cnt;
    cnt = 0;
    cin >> n;
    long long ret[101][11];
    ret[1][0] = 0;
    for (int i = 1; i <= 9; i++)
        ret[1][i] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
                ret[i][j] = ret[i - 1][j + 1] % 1000000000;
            else if (j == 9)
                ret[i][j] = ret[i - 1][j - 1] % 1000000000;
            else
                ret[i][j] = (ret[i - 1][j - 1] + ret[i - 1][j + 1]) % 1000000000;
        }
    for (int i = 0; i <= 9; i++)
        cnt += ret[n][i];
    cout << cnt % 1000000000 << '\n';
}
