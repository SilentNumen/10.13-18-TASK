#include<stdio.h>
int main()
{
    int n=10,i,j,k,t,a[13];
    while(scanf("%d",&a[0])!=EOF)
    {
        for(i=1;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            k=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]>a[k])  k=j;
            }
			if(k!=i)
			{
				t=a[k];
				a[k]=a[i];
				a[i]=t;
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]%2==1)  printf("%d ",a[i]);
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i]%2==0)  printf("%d ",a[i]);
		}
		printf("\n");
	} 
	return 0;
}
