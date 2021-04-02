#include <iostream>

using namespace std;

int n;
int map[128][128];
int wcnt(0),bcnt(0);

void solve(int y,int x,int size)
{
	int check = map[y][x];
	for(int i = y; i < y + size; i++)
		for(int j = x; j < x + size; j++)
		{
			if (check != map[i][j])
			{
				solve(y,x, size/2);
				solve(y,x + size / 2, size /2);
				solve(y + size / 2 , x , size/ 2);
				solve(y + size / 2 , x + size / 2, size / 2);
				return ;
			}
		}
	if (check)
		bcnt++;
	else
		wcnt++;
}

int main()
{

	cin >> n;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
		{
			int num;
			cin >> num;
			map[i][j] = num;
		}
	solve(0,0,n);
	cout << wcnt << '\n';
	cout << bcnt << '\n';
}
