#include<stdio.h>
int main()
{
	int n,i,j,t,k,a[100];
    double m,b[100];
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf("%d%lf",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				m=b[i];
				b[i]=b[j];
				b[j]=m;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	
	printf("\n%d %g",a[k-1],b[k-1]);
	
	return 0;
 } 
