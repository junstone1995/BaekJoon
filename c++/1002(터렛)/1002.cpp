#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int i = 0; i < T ; i++)
	{
		int x1,y1,r1,x2,y2,r2,d,c1,c2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		c1 = (r1 - r2) * (r1 - r2);
		c2 = (r1 + r2) * (r1 + r2);
		if (d == 0)
		{
			if (c1 == 0)
				cout << "-1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (d == c1 || d == c2)
			cout << "1" << '\n';
		else if (c1 < d && d < c2)
			cout << "2" << '\n';
		else
			cout << "0" << '\n';
	}
}
