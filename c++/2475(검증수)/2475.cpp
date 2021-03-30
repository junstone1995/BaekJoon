#include <iostream>

using namespace std;

int main()
{
	int ret = 0;
	int n;
	for(int i = 0 ; i <5 ; i++)
	{
		cin >> n;
		ret += n * n;
	}
	cout << ret % 10 << '\n';
}
