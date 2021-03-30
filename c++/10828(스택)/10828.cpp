#include <iostream>
#include <string>
#include <stack>

using namespace std;

int n;
stack<int> S;

int main()
{
	cin >> n;
	for(int i = 0 ; i<n ; i++)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int x;
			cin >> x;
			S.push(x);
		}
		else if (str == "pop")
		{
			if (S.empty())
				cout << -1 << '\n';
			else
			{
				cout << S.top() << '\n';
				S.pop();
			}
		}
		else if (str == "top")
		{
			if(S.empty())
				cout << -1 << '\n';
			else
				cout << S.top() << '\n';
		}
		else if (str == "size")
		{
			cout << S.size() <<'\n';
		}
		else
		{
			cout << S.empty() << '\n';
		}
	}
}
