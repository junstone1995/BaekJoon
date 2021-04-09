#include <iostream>

using namespace std;

int n;
int k;
int main()
{
	cin >> n >> k;
	int left(1),right(k),ans;
	while(left <= right)
	{
		long long cnt = 0;
		int mid = (left + right) / 2;
		for(int i = 1; i <= n; i++)
			cnt += min(mid / i ,n);
		if(cnt < k)
			left = mid + 1;
		else
		{
			right = mid - 1;
			ans = mid;
		}
	}
	cout << ans << '\n';
}
