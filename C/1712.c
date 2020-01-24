#include<stdio.h>

int main(void)
{
    int pct,work,price;
    scanf("%d %d %d",&pct,&work,&price);
    if(pct<2100000001&&work<2100000001&&price<2100000001)
    {
    if(work>=price)
        printf("-1");
    else
    {
        printf("%d",(pct/(price-work))+1);
    }
    }
    else{
        return 0;
    }
        return 0;
}
