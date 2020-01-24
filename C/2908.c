#include<stdio.h>
int numberchange(int n)
{
    int first,middle,last;
    first = n/100;
    last = n%10;
    middle = (n - first*100) /10;
    n = last *100 + middle*10 + first;
    return n;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=numberchange(a);
    b=numberchange(b);
    if(a>=b)
        printf("%d",a);
    else
        printf("%d",b);
    return 0;
}
