#include<stdio.h>
int main()
{
    int h,i,j,k,t,a[10],b[10],c[10];
    for (i=0;i<10;i++)
    {
    	scanf("%d",&c[i]);
    }
    for (i=0;i<10;i++)
    {
    	if (c[i]%2==1)
    	{
    		a[h]=c[i];
    		h++;
    	}
    	else{
    			b[k]=c[i];
    			k++;
			}
		
	}
	for (i=0;i<h-1;i++)
	{
		for(j=i+1;j<h;j++)
		{
			if(a[i]<a[j])
			
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		    }
		}
	}
	for (i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]>b[j])
			
			{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		    }
		}
	}
	for (i=0;i<h;i++)
	{
		printf("%d ",a[i]);
	}
	for (i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
 } 
