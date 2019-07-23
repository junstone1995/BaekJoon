#include<stdio.h>

int main(void)
{
    int num[8]={0};
    int i,as=0,des=0,mix=0;
    for(i=0;i<8;i++)
    scanf("%d",&num[i]);
    for(i=0;i<8;i++)
        {
            if(num[i]==i+1)
                as++;
            else if(num[i]==(8-i))
                des++;
            else 
                mix++;
        }
        if(as==8)
        printf("ascending");
        else if(des==8)
        printf("descending");
        else
        printf("mixed");
        return 0;
}
