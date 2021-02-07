#include <iostream>

using namespace std;

int ret[101][101][101];

int funexe(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <=0)
		return 1;
	if (a > 20 || b > 20 || c > 20)
		return funexe(20,20,20);
	if(a < b && b < c)
	{
		if( ret[a][b][c] != 0)
			return ret[a][b][c];
		else
			return ret[a][b][c] = funexe(a,b,c-1) + funexe(a,b-1,c-1) - funexe(a,b-1,c);
	}
	else
	{
		if( ret[a][b][c] != 0)
			return ret[a][b][c];
		else
			return ret[a][b][c] = funexe(a-1,b,c) + funexe(a - 1,b-1,c) + funexe(a-1,b,c-1) - funexe(a-1,b-1,c-1);
	}
}

int main()
{
	while(1)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if (a == -1 && a == b & b == c && c == a)
			break;
		cout << "w(" << aa << ", " << bb << ", " << cc << ") = " << funexe(a,b,c) << '\n';
	}
}
