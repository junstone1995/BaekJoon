#include <iostream>

using namespace std;

int n;
int map[64][64];
string str;

int solve(int y,int x,int len)
{
	int check = 0;
	for(int i = y; i < y + size; i++)
		for(int j = x; j < x + size; j++)
			if(map[y][x])
				check++;
	if(!check)
		str += 0;
	else if(check == len * len)
		str += 1;
	else
	{
		cout << "(";
		solve(y,x,len / 2);
		solve(y, x + len , len /2);
		solve(y + len / 2, x, len / 2);
		solve(y + len / 2, x + len /2 , len / 2):
		cout << ")";
		return;
	}
}

int main()
{
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			cin >> map[i][j];
	solve(0,0,n);
	cout << str << '\n';
}
