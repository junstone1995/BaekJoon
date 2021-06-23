#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int num[9];
int ret[9];
bool map[9];
void solve(int index,int start)
{
	if(index == m)
	{
		for(int i = 0; i< m; i++)
			cout << ret[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = start ; i< n; i++)
	{
		ret[index] = num[i];
		solve(index+1,i);
	}
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 0; i< n; i++)
	{
		cin >> num[i];
	}
	sort(num,num+n);
	solve(0,0);
}
