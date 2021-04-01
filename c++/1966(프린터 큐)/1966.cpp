#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
	int testcase,n,m,num,cnt(0);
	cin >> testcase;

	while (testcase--)
	{
		queue<pair<int,int> > q;
		priority_queue<int> pq;

		cin >> n >> m;
		cnt = 1;

		for (int i = 0; i < n; i++)
		{
			cin >> num;
			pq.push(num);
			q.push(make_pair(num,i));
		}

		while (!pq.empty())
		{
			pair<int, int> n1 = q.front();
			int n2 = pq.top();

			if (n1.first == n2)
			{
				if (n1.second == m)
				{
					cout << cnt << '\n';
					break;
				}
				pq.pop();
				cnt++;
			}
			else
				q.push(n1);
			q.pop();
		}
	}
}
