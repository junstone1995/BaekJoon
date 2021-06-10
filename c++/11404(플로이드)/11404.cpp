#include <iostream>
#include <climits>
using namespace std;

int n,m;
int cost;
int map[101][101];

void floyd()
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1 ; i <= n; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if (map[i][j] > map[i][k] + map[k][j])
                    map[i][j] = map[i][k] + map[k][j];
            }
        }
    }
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for(int i = 1; i<= n; i++)
        for(int j = 1 ; j <= n; j++)
        {
            if (i == j)
                map[i][j] = 0;
            else
                map[i][j] = 999999999;
        }
    while(m--)
    {
        int i;
        int j;
        cin >> i >> j >> cost;
        map[i][j] = min(map[i][j],cost);
    }
    floyd();
    for(int i = 1; i<= n; i++)
    {
        for(int j = 1 ; j <= n; j++)
        {
            if(map[i][j] == 999999999)
                cout << 0 << ' ';
            else
                cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
}
