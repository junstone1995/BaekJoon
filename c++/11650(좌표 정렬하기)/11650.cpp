#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int ,int>> ret(N);
	for (int i = 0; i < N; i++)
	{
		cin >> ret[i].first >> ret[i].second;
	}
	sort(ret.begin(),ret.end());
	for(int i = 0; i < N; i++)
	{
		cout << ret[i].first << ' '<< ret[i].second << '\n';
	}
}
