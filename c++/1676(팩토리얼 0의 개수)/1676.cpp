#include <iostream>

using namespace std;

int ans;
int n;

int main()
{
	cin >> n;
	ans = 0;
	for(int i = 5; i <= n; i*=5)
		ans += n/i;
	cout << ans << '\n';
}
