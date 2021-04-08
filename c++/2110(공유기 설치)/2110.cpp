#include <iostream>
#include <algorithm>

using namespace std;

int n;
int c;
int ans[200001];
int ret(0);

int main()
{
	cin >> n >> c;
	for(int i = 0; i < n; i++)
	{
		cin >> ans[i];
	}
	sort(ans,ans+n);
	int left = 0;
	int right = ans[n-1];

	while(left <= right)
	{
		int mid = (left + right) /2;
		int prev(0),cnt(1);
		for(int i = 1; i< n ;i++)
		{
			if(ans[i] - ans[prev] >= mid)
			{
				cnt++;
				prev = i;
			}
		}
		if (cnt >= c)
		{
			if(ret < mid)
				ret = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	cout << ret << '\n';
}
