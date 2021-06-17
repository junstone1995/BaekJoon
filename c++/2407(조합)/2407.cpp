#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n,m;
string fac[101][101];

string numAdd(string n1,string n2)
{
	int sum = 0;
	string ret;

	while(!n1.empty()||!n2.empty()||sum)
	{
		if(!n1.empty())
		{
			sum += n1.back() - '0';
			n1.pop_back();
		}
		if (!n2.empty())
		{
			sum += n2.back() - '0';
			n2.pop_back();
		}
		ret.push_back((sum%10) + '0');
		sum /= 10;
	}

	reverse(ret.begin(),ret.end());
	return ret;
}

string comb(int n,int r)
{
	if (n == r || r == 0)
		return "1";
	string &ret = fac[n][r];
	if (ret != "")
		return ret;
	ret = numAdd(comb(n-1,r-1),comb(n-1,r));
	return ret;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;

	cout << comb(n,m);
}
