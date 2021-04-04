#include <iostream>

using namespace std;

long long pow(int a,int b, int c)
{
	if (b == 1)
		return a;
	else
	{
		long long tmp = pow(a,b/2,c);
		if (B % 2)
			return (tmp*tmp) % c * a) % c;
		else
			return (tmp*tmp) % c;
	}
}

int main()
{
	int A,B,C;
	cin >> A >> B >> C;
	cout << pow(a%c,b,c) << '\n';
}
