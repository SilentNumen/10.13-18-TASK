³É¼¨ÅÅĞò
#include <stdio.h>
#include <stdlib.h>
struct student{char name[20]; int score;};
int main()
  {
   int N;
   scanf("%d",&N);
   struct student stu[N];
   struct student temp;
   for(int i=0;i<N;i++)
   {
       scanf("%s %d",&stu[i].name,&stu[i].score);
   }
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {if(strcmp(stu[i].name,stu[j].name)<0)
            {
            temp=stu[j];
            stu[j]=stu[i];
            stu[i]=temp;
           }
       }
   }
   for(int i=0;i<N-1;i++)
   {
       for(int j=0;j<N-1-i;j++)
       {
           if(stu[j].score<stu[j+1].score)
           {
               temp=stu[j+1];
               stu[j+1]=stu[j];
               stu[j]=temp;
           }
       }
   }
   for(int i=0;i<N;i++)
   {
       printf("%s %d\n",stu[i].name,stu[i].score);
   }
    return 0;
}
