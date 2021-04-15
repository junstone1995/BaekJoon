#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int x;
	cin >> x;
	priority_queue<int, vector<int>, greater<int>> pq;

	while(x--)
	{
		int num;
		cin >> num;
		if(num == 0)
		{
			if(pq.empty()){
				cout << "0\n";
			}
			else{
				cout << pq.top() <<'\n';
				pq.pop();
			}
		}
		else
			pq.push(num);
	}
}
