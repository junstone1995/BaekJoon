#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool comp(pair<int,string> s1,pair<int,string> s2)
{
	return s1.first < s2.first;
}
int		main()
{
	int N;
	cin >> N;
	vector<pair<int,string>> name(N);
	for(int i = 0 ; i< N ;i++)
	{
		cin >> name[i].first >> name[i].second;
	}
	stable_sort(name.begin(),name.end(),comp);
	for(int i = 0 ; i< N; i++)
	{
		cout << name[i].first << ' '<< name[i].second << '\n';
	}
}
