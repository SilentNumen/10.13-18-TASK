#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct stu
{
	int k;
	int s;
};

int main()
{
	int m, n, i, j , l, flag, real;
	struct stu a[5000], t;
	
	while( scanf("%d %d", &n, &m)!=EOF )
	{
		l = floor(m*1.5);
		if(l > n)
			l = n;
		for(i=0;i<n;i++)
		{
			scanf("%d %d", &a[i].k, &a[i].s);
		}
	
		for(i=1;i<n;i++)
		{
			flag=1;
			for(j=0;j<n-i;j++)
			{
				if(a[j].s<a[j+1].s)
            	{
                	flag=0;
                	t=a[j];
                	a[j]=a[j+1];
                	a[j+1]=t;
            	}
        	}
        	if(flag) break;
    	}
    
    	for(i=0,real=0;i<n;i++)
    	{
    		if(a[i].s>=a[l-1].s)
    			real++;
    		if(a[i].s==a[i-1].s)
    		{
    			if(a[i].k<a[i-1].k)
    			{
    				t=a[i];
                	a[i]=a[i-1];
                	a[i-1]=t;
				}
			}
		}
    	printf("%d %d\n", a[l-1].s, real);
    	for(i=0;i<real;i++)
    		printf("%d %d\n", a[i].k, a[i].s);
    	printf("\n"); 
    } 
	return 0;
}
