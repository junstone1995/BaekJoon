#include<stdio.h>
#define Max_size 10001

int arr[Max_size];
int numberplus(int n)
    {
        int sum=n;
        while(n!=0)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }

int main(void)
{
   int i;
    for(i=0;i<Max_size;i++)
    {
        arr[i]=1;
    }
    for(i=1; i<Max_size;i++)
    {
        int idx = numberplus(i);
        if(idx <= Max_size)
            arr[idx]=0;
    }
    for(i=1;i<Max_size;i++)
    {
        if(arr[i]!=0)
        printf("%d\n",i);
    }
    return 0;
}






