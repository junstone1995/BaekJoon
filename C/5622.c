#include<stdio.h>

int main(void)
{
    char num[16];
    int cnt=0;
    scanf("%s",num);
    for(int i=0;i<sizeof(num);i++)
    {
        if(num[i]=='A'||num[i]=='B'||num[i]=='C')
            cnt += 3;
        else if(num[i]=='D'||num[i]=='E'||num[i]=='F')
            cnt += 4;
            else if(num[i]=='G'||num[i]=='H'||num[i]=='I')
                cnt +=5;
            else if(num[i]=='J'||num[i]=='K'||num[i]=='L')
                cnt +=6;
            else if(num[i]=='M'||num[i]=='N'||num[i]=='O')
                cnt +=7;
            else if(num[i]=='P'||num[i]=='Q'||num[i]=='R'||num[i]=='S')
                cnt +=8;
                else if(num[i]=='V'||num[i]=='T'||num[i]=='U')
                cnt +=9;
                else if(num[i]=='Y'||num[i]=='W'||num[i]=='X'||num[i]=='Z')
                cnt +=10;
    }
    printf("%d",cnt);
}