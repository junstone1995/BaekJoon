#include <iostream>
#include <climits>

#define MAX 101

using namespace std;

int n,m;
int know[MAX][MAX];
int ret = INT_MAX;
int people;
void	floyd()
{
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if (i == j)
					continue;
				else if (know[i][k] && know[k][j])
				{
					if (know[i][j] == 0)
						know[i][j] = know[i][k] + know[k][j];
					else
						know[i][j] = min(know[i][j],know[i][k] + know[k][j]);
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	int x,y;
	for(int i = 0; i< m; i++)
	{
		cin >> x >> y;
		know[x][y] = know[y][x] = 1;
	}

	floyd();
	people = 0;
	for (int i = 1 ;i <= n; i++)
	{
		int sum = 0;
		for(int j = 1; j <= n; j++)
			sum += know[i][j];
		if(ret > sum)
		{
			ret = sum;
			people = i;
		}
	}
	cout << people << '\n';
}
