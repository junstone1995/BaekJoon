#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int N;
int T;
int ret;
vector <pair<string,int> > v;
string s1,s2;

int main()
{
	cin >> T;
	while(T--)
	{
		ret = 1;
		cin >> N;
		for(int i = 0; i < N; i++)
		{
			cin >> s1 >> s2;
			if (v.size() == 0)
			{
				v.push_back(make_pair(s2,1));
				continue;
			}
			for(int j = 0; j < v.size(); j++)
			{
				if(s2 == v[j].first)
				{
					v[j].second++;
					break;
				}
				if(j == v.size()-1)
					v.push_back(make_pair(s2,0));
			}
		}
		for(int i = 0; i <v.size();i++)
			ret *= (v[i].second + 1);
		cout << ret - 1 << '\n';
		v.clear();
	}
}
