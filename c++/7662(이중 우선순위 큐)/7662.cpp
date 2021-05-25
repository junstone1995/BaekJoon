#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int T;

	cin >> T;
	int k;
	while(T--)
	{
		cin >> k;
		char c;
		int i;
		multiset<int> mq;
		while (k--)
		{
			cin >> c >> i;
			if (c == 'I')
				mq.insert(i);
			else
			{
				if(!mq.empty() && i == -1)
					mq.erase(mq.begin());
				else if (!mq.empty() && i == 1)
				{
					auto iter = mq.end();
					iter--;
					mq.erase(iter);
				}
			}
		}
		if (mq.empty())
			cout << "EMPTY\n";
		else
		{
			auto end_iter = mq.end();
			end_iter--;
			cout << *end_iter << ' ' << *mq.begin() << '\n';
		}
	}
}
