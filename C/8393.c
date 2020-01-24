#include<stdio.h>

int main(void)
{
    int a,i=0,result=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
        result+=i;
        printf("%d",result);
        return 0;
}