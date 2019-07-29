#include<stdio.h>

int main(void)
{
    int num,i;
    double result,max=0;
    scanf("%d",&num);
    double score[num];
    for(i=0;i<num;i++)
        scanf("%lf",&score[i]);
    for(i=0;i<num;i++)
    {
        if(score[i]>max)
            max = score[i];
    }
    
     for(i=0;i<num;i++)
        score[i]=score[i]/max*100;
    for(i=0;i<num;i++)
        result+=score[i];
    printf("%lf",result/num);
    return 0;
}
