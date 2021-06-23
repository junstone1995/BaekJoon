#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int num[9];
int ret[9];
bool map[9];
void solve(int index,int n, int m)
{
	if(index == m)
	{
		for(int i = 0; i< m; i++)
			cout << ret[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = 0 ; i< n; i++)
	{
		if(!map[i])
		{
			map[i] = true;
			ret[index] = num[i];
			solve(index+1,n,m);
			map[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i = 0; i< n; i++)
	{
		cin >> num[i];
	}
	sort(num,num+n);
	solve(0,n,m);
}
