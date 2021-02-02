#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int		main()
{
	int N;
	cin >> N;
	vector<string> ret(N);
	for(int i = 0; i < N; i++)
	{
		cin >> ret[i];
	}
	sort(ret.begin(),ret.end());
	for(auto N : ret)
	{
		cout << N << '\n';
	}
}
