# include <stdio.h>
# include <string.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int i,j,k;
	char a[100][100],b[100];
	int c[100];
	for(i = 0;i < n;i++)
	scanf("%s %d",a[i],&c[i]);
	for(i = 0; i< n;i++)
	{
		for(j = 0;j<n-1-i;j++)
		{
			if(c[j] <c[j+1])
		     {
		     	k = c[j];
		     	c[j] = c[j+1];
		     	c[j+1] = k;
		     	strcpy(b,a[j]);
		     	strcpy(a[j],a[j+1]);
		     	strcpy(a[j+1],b);
			 }
		}
		
	}
for(i = 0;i < n;i++)
{
for(j = 0;j < n-1;j++)
{
if(a[j] == a[j+1]&&strcmp(a[j],a[j+1])> 0)
{
                                                strcpy(b,a[j]);
		     	strcpy(a[j],a[j+1]);
		     	strcpy(a[j+1],b);}
}

}

	for(i = 0; i< n;i++)
	printf("%s %d\n",a[i],c[i]); 
	return 0;
 } 