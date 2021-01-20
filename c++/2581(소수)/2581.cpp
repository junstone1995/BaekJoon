#include <iostream>

using namespace std;

int		main()
{
	int M,N,j;
	int ret,min,cnt;

	ret = 0;
	min = 0;
	cnt = 0;
	cin >> M >> N;
	if (M > N)
	{
		cout << -1 << endl;
		return (0);
	}
	for (int i = M; i <= N; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if(i % j == 0)
				break;
		}
		if (j == i)
		{
			cnt++;
			ret += i;
			if ( cnt == 1)
				min = i;
		}
	}
	if (cnt == 0)
		cout << -1 << endl;
	else
		cout << ret << endl << min << endl;
	return (0);
}
