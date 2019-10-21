
明明的随机数
#include <stdio.h>
int a[1001];
int main()
{
    int N,c=0;
    int temp;
    while(scanf("%d",&N) != EOF)
    {
    for(int i = 0;i < 1001;i++)
        a[i]=0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&temp);
        a[temp] = 1;
    }
        for(int i = 0;i < 1001;i++)
    {
        if(a[i] == 1)
        {
            c++;
        }}
        printf("%d",c);
        printf("\n");
    for(int i = 0;i < 1001;i++)
    {
        if(a[i] == 1)
        printf("%d ",i);
    }
    }
    return 0;
}
