#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

int n;
char see[MAX][MAX];
bool visit[MAX][MAX];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int cnt;

void    dfs(int y, int x)
{
    visit[y][x] = true;
    for(int i = 0; i< 4; i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if(nx < 0 || ny < 0 || nx >= n || ny >= n)
            continue;
        if (visit[ny][nx] == false && see[ny][nx] == see[y][x])
        {
            dfs(ny,nx);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i< n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < n ; j++)
            see[i][j] = str[j];
    }
    cnt = 0;
    for(int i = 0; i< n; i++)
        for(int j = 0; j < n ; j++)
            if(!visit[i][j])
            {
                dfs(i,j);
                cnt++;
            }
    cout << cnt << " ";
    cnt = 0;
    for(int i = 0; i< n; i++)
        for(int j = 0; j < n ; j++)
        {
            if(see[i][j] == 'G')
                see[i][j] = 'R';
        }
    memset(visit,false,sizeof(visit));
    for(int i = 0; i< n; i++)
        for(int j = 0; j < n ; j++)
            if(!visit[i][j])
            {
                dfs(i,j);
                cnt++;
            }
    cout << cnt << "\n";
}
