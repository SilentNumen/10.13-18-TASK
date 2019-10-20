#include<stdio.h>
int main()
{
    int i,t,j,k=0,n,b,a[500];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    	scanf("%d",&b);
		if(b%2!=0)
		{
			
			a[k]=b;
			k++;
			
		}
		
	}
	for (i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]>a[j])
			{
			  t=a[i];
			  a[i]=a[j];
			  a[j]=t;	
			}
		}
	}
	printf("%d",a[0]);
	for (i=1;i<k;i++)
	{
		printf("£¬%d",a[i]);
	}
	return 0;
 } 
