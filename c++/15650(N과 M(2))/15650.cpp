#include <iostream>

using namespace std;

int N,M;

bool idxcheck(int *ret)
{
	for (int i = 0; i < M -1 ; i++)
		if (ret[i] > ret[i + 1])
			return true;
	return false;
}

void	dfs(int idx, int *ret, bool *check)
{
	if (idx == M)
	{
		if(idxcheck(ret))
			return;
		for(int i = 0; i < M; i++)
			cout << ret[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i = 1; i <= N; i++)
	{
		if(!check[i])
		{
			check[i] = true;
			ret[idx] = i;
			dfs(idx + 1, ret, check);
			check[i] = false;
		}
	}
}

int main()
{
	int idx;
	idx =0;
	int *ret = new int[8];
	bool *check = new bool[8];
	cin >> N >> M;
	dfs(idx, ret, check);
	delete[] ret;
	delete[] check;
	return (0);
}
