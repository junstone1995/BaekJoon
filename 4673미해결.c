#include<stdio.h>
#define Max_size 10000

int numberplus(int n)
    {
        int sum=0;
        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
int LSearch(int ar[],int len,int target)
{
       int i = 0;
    for (; i < len; i++){
        if (ar[i] == target){
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int arr[Max_size]={0};
    int result[Max_size]={0};
    int choice[Max_size]={0};
    int i,j;
    for(i=0;i<Max_size;i++)
        {
            arr[i]=i+1;
        }
    for(i=0;i<Max_size;i++)
        {
            result[i]=arr[i]+numberplus(i+1);//셀프넘버를 넣었다
        }
    for(i=1;i<Max_size;i++)
    {
        choice[i]=LSearch(result,sizeof(arr)/sizeof(int),i);
        if((choice[i]!=-1)&&(choice[i]<100))
            printf("%d\n",choice[i]);
    }
return 0;
}






