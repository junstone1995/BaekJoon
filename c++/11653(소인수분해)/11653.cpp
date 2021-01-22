#include <iostream>

using namespace std;

int		main()
{
	int N;

	cin >> N;
	for (int i = 2; N > 1;)
	{
		if (N % i == 0)
		{
			cout << i << endl;
			N /= i;
		}
		else
			i++;
	}
	if (N > 1)
		cout << N << endl;
	return (0);
}
