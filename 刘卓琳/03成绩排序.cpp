#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[20];
    int score;
};
int main()
{
    int n;
    scanf("%d%d",&n);
    struct Student stu[n];
    struct Student temp;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",stu[i].name,&stu[i].score);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(strcmp(stu[i].name,stu[j].name)<0)
            {
                /*strcpy(temp,stu[i]);
                strcpy(stu[i],stu[j]);
                strcpy(stu[j],temp);*/
                temp=stu[j];
                stu[j]=stu[i];
                stu[i]=temp;
            }
        }
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
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",stu[i].name,stu[i].score);
    }
    return 0;
}