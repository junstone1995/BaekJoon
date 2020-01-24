#include<stdio.h>

int main()
{
	int x;
	scanf("%d", &x); //26
	int count = 0;
	int a, b, c, d;
	a = x;
	while (1)
	{
		c = a % 10; //26 % 10 = 6 = c 
		d = a / 10;// 26 / 10 = 2 = d
		b = (c + d) % 10; // c + d = 8  % 10 =   8
		a = c * 10 + b;
		count++;
		if (x == a)
			break;
	}
	printf("%d", count);
	return 0;

}