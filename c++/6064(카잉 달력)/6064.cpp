#include <iostream>

using namespace std;

int m,n,x,y;

int gcd(int a,int b)
{
	if (a % b == 0)
		return (b);
	return gcd(b,a%b);
}

int lcm(int a,int b)
{
	return (a * b)/ gcd(a,b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--)
	{
		cin >> m >> n >> x >> y;
		int maxyear = lcm(m,n);
		int j;
		for(j = x ; j <= maxyear; j+=m)
		{
			int tmp = (j % n == 0) ? n : j % n;
			if (tmp == y)
			{
				cout << j << '\n';
				break;
			}
		}
		if (j > maxyear)
			cout << "-1\n";
	}
}
