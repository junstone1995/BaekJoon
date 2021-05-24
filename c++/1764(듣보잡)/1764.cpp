#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
string s;
vector<string> nol;
vector<string> ret;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	while (n--)
	{
		cin >> s;
		nol.push_back(s);
	}
	sort(nol.begin(),nol.end());
	while(m--)
	{
		cin >> s;
		if (binary_search(nol.begin(),nol.end(),s))
			ret.push_back(s);
	}
	sort(ret.begin(),ret.end());
	cout << ret.size() << '\n';
	for(auto n : ret)
		cout << n << '\n';
}
