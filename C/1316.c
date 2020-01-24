#include <stdio.h>
#include <string.h>

int select(char a[],int len);

int main(void)
{
    int n,i,sum =0;
    char arr[100];

    scanf("%d",&n);//개수 입렵
    for (i=0; i< n; i++)
    {
        scanf("%s",arr); //단어 입력
        sum += select(arr,strlen(arr));
    }
    printf("%d", sum);
    return 0;
}

int select(char a[], int len)
{
    int i,j;
    int key = 0;
    for(i=0; i< len; i++)
    {
        for(j=0;j<len; j++)
        if(a[i] == a[j]) // 같으면 검사 
            {
                key = j-i;
                if (key>1) //key가 1이상이면 j 와 j-1 이 같은지 검사 같으면 0을 리턴
                    if(a[j-1]!=a[j])
                    return 0;
            }
    }
    return 1;
}