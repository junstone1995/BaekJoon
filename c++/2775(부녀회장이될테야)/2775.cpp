#include <iostream>

using namespace std;

static int		getNumber(int a, int b)
{
	if (b == 1)
		return 1;
	if (a == 0)
		return b;
	return (getNumber(a - 1, b) + getNumber(a, b - 1));
}

int		main()
{
	int cnt;
	int a;
	int b;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> a >> b;
		cout<< getNumber(a, b) << '\n';
	}
}
