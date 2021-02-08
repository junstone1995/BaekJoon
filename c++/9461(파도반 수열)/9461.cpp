#include <iostream>

using namespace std;

long long ret[101];

long long padoban(int num)
{
	if (num >= 1 && num <= 3)
		return ret[num] = 1;
	if (num == 4 || num == 5)
		return ret[num] = 2;
	if (ret[num] != 0)
		return ret[num];
	return ret[num] = padoban(num - 1) + padoban(num - 5);
}

int main()
{
	int T;
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		int num;
		cin >> num;
		padoban(num);
		cout << ret[num] << '\n';
	}
}
