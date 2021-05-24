#include <iostream>
#include <queue>
#include <utility>

using namespace std;

#define MAX 1001

int m, n, ret = 0;
int box[MAX][MAX] = {0};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
queue<pair<int,int> > q;

int inside(int nx, int ny)
{
    if ( nx < m && ny < n && 0 <= nx && 0 <= ny)
        return (1);
    return (0);
}

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i< 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (inside(nx,ny) && box[ny][nx] == 0)
            {
                box[ny][nx] = box[y][x] + 1;
                q.push(make_pair(ny,nx));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> box[i][j];
            if(box[i][j] == 1)
                q.push(make_pair(i,j));
        }
    }
    bfs();
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (box[i][j] == 0)
            {
                cout << "-1\n";
                return (0);
            }
            if (ret < box[i][j])
                ret = box[i][j];
        }
    }
    cout << ret - 1 << '\n';
}
