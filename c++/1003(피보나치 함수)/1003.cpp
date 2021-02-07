#include <iostream>

using namespace std;

int ret[40];

int fibonacci(int num)
{
	if(num == 0)
		return ret[0] = 0;
	if(num == 1)
		return ret[1] = 1;
	if(ret[num] != 0)
		return ret[num];
	return ret[num] = fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
			cout << "1 0" << '\n';
		else
		{
			fibonacci(num);
			cout <<ret[num - 1] << ' '<<ret[num] << '\n';
		}
	}
}
