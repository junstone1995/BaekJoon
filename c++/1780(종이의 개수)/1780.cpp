#include <iostream>

using namespace std;

int n;
int map[2187][2187];
int ret[3];

void solve(int y,int x,int len)
{
    int check = map[y][x];
    bool flag = true;

    for(int i = y; i < y + len ; i++)
    {
        for(int j = x; j < x + len; j++)
        {
            if(map[i][j] != check)
            {
                flag = false;
                break;
            }
        }
    }

    if(flag)
    {
        ret[check + 1]++;
    }
    else
    {
        for(int i = y; i < y + len; i += len/3)
            for(int j = x; j < x + len; j += len/3)
                solve(i,j,len/3);
    }
}

int main()
{
    cin >> n;

    for(int i = 0; i< n; i++)
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    solve(0,0,n);
    for(auto n : ret)
        cout << n << '\n';
}
