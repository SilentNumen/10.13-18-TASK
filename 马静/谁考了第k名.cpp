#include <stdio.h>
struct student
{
    int num;
    double score;
};
int main()
{
    struct student stu[100],t;
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d%lf",&stu[i].num,&stu[i].score);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
     if(stu[j].score<stu[j+1].score)
        {
        t=stu[j];
        stu[j]=stu[j+1];
        stu[j+1]=t;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i==k-1)
            printf("%d %g",stu[i].num,stu[i].score);
    }

    return 0;
}
