#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
vector<int> v[100001];
int    parent[100001];
bool visited[100001];

void dfs(int node)
{
    visited[node] = true;
    for(int i = 0; i<v[node].size();i++)
    {
        int next = v[node][i];
        if (!visited[next])
        {
            parent[next] = node;
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i< n-1; i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);
    for (int i = 2 ; i<=n ; i++)
    {
        cout << parent[i] << '\n';
    }
}
