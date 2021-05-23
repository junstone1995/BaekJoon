#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int num;
    priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int, int> > > pq;

    cin >> n;
    while (n--)
    {
        cin >> num;
        if (num == 0)
        {
            if(pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top().second << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(make_pair(abs(num),num));
        }
    }
}
