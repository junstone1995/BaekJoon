#include<stdio.h>

int main(void)
{
	int i = 0, j, a, b;
	int c[100000] = { 0 };
	int first[100000] = { 0 };
	int second[100000] = { 0 };
	scanf("%d", &j);
	for (i = 0; i < j; i++)
	{
		scanf("%d %d", &a, &b);
		first[i] = a;
		second[i] = b;
		c[i] = a + b;
	}
	for (i = 0; i < j; i++)
	{
		printf("Case #%d: %d + %d = %d\n", i + 1, first[i], second[i], c[i]);
	}
	return 0;
}