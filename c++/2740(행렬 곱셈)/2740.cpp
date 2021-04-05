#include <iostream>

using namespace std;

int f[101][101];
int s[101][101];
int ans[101][101];

int main()
{
    int n,m,k;

    cin >> n >> m;
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            cin >> f[i][j];
    cin >> m >> k;
    for(int i = 0; i < m;i++)
        for(int j = 0 ;j < k;j++)
            cin >> s[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < k; j++)
        {
            for(int l = 0; l < m; l++)
            {
                ans[i][j] += f[i][l] * s[l][j];
            }
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
}
