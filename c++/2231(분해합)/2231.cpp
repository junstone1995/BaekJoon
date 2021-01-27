#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int ret = 0;
		int tmp = i;
		ret += i;
		while (tmp > 0)
		{
			ret += (tmp % 10);
			tmp /= 10;
		}
		if (ret == N)
		{
			cout << i << '\n';
			return (0);
		}
	}
	cout << "0" << '\n';
	return (0);
}
