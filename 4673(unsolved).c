#include<stdio.h>

void Karprekar(n)
{
    int a,b;
    if(n<10000)
    printf("%d\n",n);
    if(n<10)
    {
        a=n;
        b=n;
    }
    else{
    a= n%10;
    b= n/10;
    }
    if(n<10000)
    Karprekar(n+a+b);
}
int main(void)
{
    int n=1;
    Karprekar(n);
    return 0;
}



