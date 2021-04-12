#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	priority_queue<int> pq;
	cin >> n;
	while(n--)
	{
		int x;
		cin >> x;
		if ( x == 0)
		{
			if(pq.empty())
				cout << "0\n";
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			pq.push(x);
		}
	}
}
