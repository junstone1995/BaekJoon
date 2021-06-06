#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int a,b;
bool visit[10000];

void bfs()
{
    queue<pair<int, string> > q;
    q.push(make_pair(a, ""));
    visit[a] = true;
    while(!q.empty())
    {
        int num = q.front().first;
        string str = q.front().second;
        q.pop();

        if (num == b)
        {
            cout << str << '\n';
            return;
        }

        int D,S,L,R;
        D = (num * 2) % 10000;
        if (!visit[D])
        {
            visit[D] = true;
            q.push(make_pair(D,str + "D"));
        }

        S = num - 1 < 0 ? 9999 : num - 1;
        if (!visit[S])
        {
            visit[S] = true;
            q.push(make_pair(S, str + "S"));
        }

        L = (num % 1000) * 10 + (num / 1000);
        if (!visit[L])
        {
            visit[L] = true;
            q.push(make_pair(L, str + "L"));
        }

        R = (num % 10) * 1000 + (num / 10);
        if (!visit[R])
        {
            visit[R] = true;
            q.push(make_pair(R, str + "R"));
        }
    }
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        memset(visit,false,sizeof(visit));
        bfs();
    }
}
