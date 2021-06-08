#include <iostream>
#include <map>

using namespace std;

map<string, string> M;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n,m;
	cin >> n >> m;
	string key;
	string value;
	while(n--)
	{
		cin >> key >> value;
		M.insert(make_pair(key,value));
	}
	while(m--)
	{
		cin >> key;
		cout << M[key] << '\n';
	}
}
