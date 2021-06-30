#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<string,int> > ans;
vector<string> tmp;
string s;
int n,cnt = 0;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	while(n--)
	{
		cin >> s;
		s.erase(0,s.find('.') + 1);
		tmp.push_back(s);
	}
	sort(tmp.begin(),tmp.end());
	s = tmp[0];
	for(int i = 0; i < tmp.size();i++)
	{
		if (tmp[i] == s)
			cnt++;
		else if(tmp[i] != s)
		{
			ans.push_back(make_pair(s,cnt));
			cnt = 1;
			s = tmp[i];
		}
	}
	ans.push_back(make_pair(s,cnt));
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i].first << " " << ans[i].second << '\n';
}
