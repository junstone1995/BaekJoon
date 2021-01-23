#include <iostream>
#include <cmath>

using namespace std;

int		main(void)
{
	int n;
	int cnt;

	while(1)
	{
		cin >> n;
		if (!n)
			break;
		int max,min;
		cnt = 0;
		min = n + 1;
		max = n * 2;
		bool *prime = new bool[max + 1];
		fill_n(prime, max+1, true);
		prime[0] = false;
		prime[1] = false;
	for (int i = 2; i <= sqrt(max); i++)
		if(prime[i] == true)
			for (int j = i * 2; j <= max; j += i)
				prime[j] = false;
	for (int i = min; i <= max; i++)
		if(prime[i] == true)
			cnt++;
		cout << cnt << "\n";
	delete[] prime;
	}
	return (0);
}
