#include <iostream>

using namespace std;

int N,M;

void	dfs(int idx, int *ret)
{
	if (idx == M)
	{
		for(int i = 0; i < M; i++)
			cout << ret[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = 1; i <= N; i++)
	{
			ret[idx] = i;
			dfs(idx + 1, ret);
	}
}

int main()
{
	int idx;
	idx =0;
	int *ret = new int[8];
	cin >> N >> M;
	dfs(idx, ret);
	delete[] ret;
	return (0);
}
