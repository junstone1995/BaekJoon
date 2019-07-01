#include<stdio.h>

int main(void)
{
	int a, b, hun, ten, num, z, x, c, result;
	scanf("%d %d", &a, &b);
	hun = b / 100;
	ten = (b - (hun * 100)) / 10;
	num = (b - ((hun * 100) + (ten * 10))) / 1;
	z = a * hun;
	x = a * ten;
	c = a * num;
	result = a * b;
	printf("%d\n", c);
	printf("%d\n", x);
	printf("%d\n", z);
	printf("%d\n", result);
	return 0;
}

