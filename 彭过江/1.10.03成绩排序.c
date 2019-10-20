#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
	char name[20];
	int score;
};
int main()
{
	struct stu a[20], t;
	int n, k, i, j, flag;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d", &a[i].name, &a[i].score);
	}
	//printf("-----------------------------\n");
	
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
        if(flag) break;
    }
    
	int x = 0, y, z1, z2;
    for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<n-1;j++)
		{
			if(a[j].score==a[j+1].score)
        	{
            	z1 = strlen(a[j].name);
				z2 = strlen(a[j+1].name);
				if( z1>z2 )
            		y = z2;
            	if( z1<=z2 )
            		y = z1;
				while(x<y)
            	{
					while(a[j].name[x]==a[j+1].name[x])
						x++;
					if(a[j].name[x]>a[j+1].name[x])
            		{
            			//flag=1;
            			t=a[j];
            			a[j]=a[j+1];
            			a[j+1]=t;
            			break;
					}
		    	}
			}
		}
		if(flag) break;
    }
	for(i=0;i<n;i++)
		printf("%s %d\n",a[i].name,a[i].score);
	return 0;
}

