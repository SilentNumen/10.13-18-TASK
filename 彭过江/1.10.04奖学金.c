#include <stdio.h>
#include <stdlib.h>

struct stu
{
	int id;//学号 
	int ys;//语文
	int ms;//数学
	int es;//英语 
	int score;//总分 
};

int main()
{
	struct stu a[300], t;
	int n, i, j, k, flag;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{ 
		a[i].id=i+1;
		scanf("%d %d %d", &a[i].ys, &a[i].ms, &a[i].es);
		a[i].score = a[i].ys+a[i].ms+a[i].es;
	}

	/*printf("-----------------------\n");
	for(i=0;i<n;i++)
		printf("%d %d\n",a[i].id,a[i].score);
	printf("-----------------------\n");*/
	
	for(i=1;i<n;i++)
	{
		flag=1;
		for(j=0;j<n-i;j++)
		{
			if(a[j].score<a[j+1].score)
            {
                flag=0;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(flag) break; //if(flag==1) break;
    }
	
	for(k=0;k<5;k++)
	{
		if(a[k].score==a[k+1].score)
		{
			if(a[k].ys<a[k+1].ys)
			{
				t=a[k+1];
				a[k]=a[k+1];
				a[k+1]=t;
			}
			if(a[k].ys==a[k+1].ys)
			{
				if(a[k].id>a[k+1].id)
				{
					t=a[k+1];
					a[k]=a[k+1];
					a[k+1]=t;
				}
			}
		}
	}
	
	for(i=0;i<5;i++)
		printf("%d %d\n",a[i].id,a[i].score);

	return 0;
}

