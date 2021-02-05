#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int ret[9][9];
int MAX = 9;
int cnt = 0;
bool flag = false;
vector<pair<int, int>> pnts;

void printSdoku()
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            cout << ret[i][j];
            if (j != 8)
                cout << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

bool check(pair<int, int> p)
{
    int x = p.first / 3;
    int y = p.second / 3;
    for (int i = 0; i < 9;i++)
    {
        if(ret[p.first][i] == ret[p.first][p.second] && i != p.second)
            return false;
        if(ret[i][p.second] == ret[p.first][p.second] && i != p.first)
            return false;
    }
    for (int i = x * 3; i < x * 3 + 3; i++)
        for(int j = y* 3; j< y * 3 + 3; j++)
            if(ret[i][j] == ret[p.first][p.second])
            {
                if( i != p.first && j != p.second)
                    return false;
            }
    return true;
}

void sdoku(int idx)
{
    if (idx == cnt)
    {
        printSdoku();
        flag = true;
        return;
    }
    for (int i = 1; i < 10; i++)
    {
        ret[pnts[idx].first][pnts[idx].second] = i;
        if(check(pnts[idx]))
            sdoku(idx + 1);
        if(flag)
            return;
    }
    ret[pnts[idx].first][pnts[idx].second] = 0;
    return ;
}

int main()
{
    pair<int,int> pnt;
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
    {
            cin >> ret[i][j];
            if(ret[i][j] == 0)
            {
                cnt++;
                pnt.first = i;
                pnt.second = j;
                pnts.push_back(pnt);
            }
    }
    sdoku(0);
}
