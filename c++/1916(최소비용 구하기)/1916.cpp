#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;
int start,finish;
vector <pair<int, int> > v[1001];
int d[1001];

int main()
{
    cin >> n >> m;
    for (int i= 1; i<=n; i++)
    {
        d[i] = 199999999;
    }
    for (int i= 1; i <= m; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        v[x].push_back(make_pair(y,z));
    }
    cin >> start >> finish;
    priority_queue<pair<int , int> > pq;
    pq.push(make_pair(start,0));
    d[start] = 0;
    while(!pq.empty())
    {
        int cost = -pq.top().second;
        int cur = pq.top().first;
        pq.pop();
        if (d[cur] < cost) continue;
        for(int i = 0; i<v[cur].size();i++)
        {
            int next = v[cur][i].first;
            int nextCost = cost + v[cur][i].second;
            if (nextCost < d[next])
            {
                d[next] = nextCost;
                pq.push(make_pair(next,-nextCost));
            }
        }
    }
    cout << d[finish] << '\n';
}
