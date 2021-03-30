#include <iostream>

using namespace std;

pair<long long,long long> twofive_cnt(long long n)
{
	long long two_cnt = 0;
	long long five_cnt = 0;
	for (long long i = 2; i <= n; i *= 2)
	{
		two_cnt += n / i;
	}
	for (long long i = 5; i<= n; i *= 5)
	{
		five_cnt += n / i;
	}
	return (make_pair(two_cnt, five_cnt));
}

int main()
{
	long long n,m;
	cin >> n >> m;
	pair<long long,long long> fun_n = twofive_cnt(n);
	pair<long long,long long> fun_mn = twofive_cnt(n-m);
	pair<long long,long long> fun_m = twofive_cnt(m);

	long long a = fun_n.first - (fun_mn.first + fun_m.first);
	long long b = fun_n.second - (fun_mn.second + fun_m.second);

	cout << ((a < b) ? a : b) << '\n';
}
