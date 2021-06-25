#include <cstdio>

using namespace std;

int main()
{
    int before[3],after[3],ret[3];
    scanf("%d:%d:%d",&before[0],&before[1],&before[2]);
    scanf("%d:%d:%d",&after[0],&after[1],&after[2]);
    if (before[2] <= after[2])
        ret[2] = after[2] - before[2];
    else
    {
        ret[2] = 60 - before[2] + after[2];
        after[1] -= 1;
    }
    if (before[1] <= after[1])
        ret[1] = after[1] - before[1];
    else
    {
        ret[1] = 60 - before[1] + after[1];
        after[0] -= 1;
    }
    if (before[0] <= after[0])
        ret[0] = after[0] - before[0];
    else
    {
        ret[0] = (24 - before[0]) + after[0];
    }
    if(ret[0] == 0 && ret[1] == 0 && ret[2] == 0) ret[0] = 24;
    printf("%02d:%02d:%02d",ret[0],ret[1],ret[2]);
}
