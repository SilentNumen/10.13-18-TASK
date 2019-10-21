#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int num;
    float score;
};
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    struct Student stu[n];
    struct Student temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d%f",&stu[i].num,&stu[i].score);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(stu[j].score<stu[j+1].score)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    printf("%d %.1f",stu[k-1].num,stu[k-1].score);
    return 0;
}
