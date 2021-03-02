#include <iostream>

using namespace std;

int fac(int n)
{
	int ret = 1;
	while(n)
	{
		ret *= n;
		n--;
	}
	return ret;
}
int main()
{
	int n,k;
	cin >> n >> k;
	cout << fac(n) / (fac(k) * fac(n-k));
}
