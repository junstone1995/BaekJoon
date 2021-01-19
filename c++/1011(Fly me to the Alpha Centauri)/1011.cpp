#include <iostream>
#include <cmath>

using namespace std;

int		main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T ; i++)
	{
		int x,y;
		cin >> x >> y;

		long long j = 1;
		while (j * j <= (y-x))
			j++;
		j--;

		long long remain = (y - x) - (j * j);
		remain = (long long)ceil((double)remain/(double)j);

		cout << j * 2 - 1 + remain << "\n";
	}
	return (0);
}
