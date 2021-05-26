#include <iostream>

using namespace std;

#define MAX 21
bool ret[MAX];
int m,num;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	string str;

	cin >> m;
	while (m--)
	{
		cin >> str;
		if (str == "add")
		{
			cin >> num;
			ret[num] = true;
		}
		else if (str == "check")
		{
			cin >> num;
			ret[num] ? (cout << "1\n") : (cout << "0\n");
		}
		else if (str == "remove")
		{
			cin >> num;
			ret[num] = false;
		}
		else if (str == "toggle")
		{
			cin >> num;
			ret[num] = !ret[num];
		}
		else if (str == "all")
		{
			for(int i =0; i< MAX; i++)
				ret[i] = true;
		}
		else if (str == "empty")
		{
			for(int i =0; i< MAX; i++)
				ret[i] = false;
		}
	}
}
