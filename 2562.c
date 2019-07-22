#include<stdio.h>

int main(void)
{
    int i=0,max,j=0;
    int num[8]={0};
    for(i=0;i<9;i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(i=0;i<9;i++)
    { 
       
        if(max<num[i])
            {
            max= num[i];
            j=i;
            }
    }
    printf("%d\n%d",max,j+1);
    return 0;
}
