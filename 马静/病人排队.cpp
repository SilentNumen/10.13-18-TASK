≤°»À≈≈∂”
#include <stdio.h>
#include <stdlib.h>
struct people{char id[11]; int year;};
int main()
{
    int n;
    scanf("%d",&n);
    struct people p[101];
    struct people t;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",&p[i].id,&p[i].year);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
                if((p[j].year<p[j+1].year)&&(p[j].year>=60||p[j+1].year>=60))
                {
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
                }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",p[i].id);
    }
    return 0;
}
