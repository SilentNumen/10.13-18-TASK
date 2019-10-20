#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,m,b[20];
     char a[n][20],t[20];	
		
	
    for(i=0;i<n;i++)
	{
	scanf("%s%d",a[i],&b[i]);
	
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
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
				
			}
		}
	}
	for (i=0;i<n;i++)
	{
	printf("\n%s",a[i]);
	printf(" %d",b[i]);
    }
	return 0;
 } 
