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
		cin >> ret[i].second >> ret[i].first;
	}
	sort(ret.begin(),ret.end());
	for(int i = 0; i < N; i++)
	{
		cout << ret[i].second << ' '<< ret[i].first << '\n';
	}
}
