# include<stdio.h>
void sort(int *a,int len)
   {
   int i,j,t;
   for(i = 0;i < len - 1;i++)
   {
   	  for(j = 0;j < len - 1 - i;j++)
   	  {
   	   if(a[j] > a[j+1])
   	    {
   		t = a[j];
   		a[j] = a[j+1];
   		a[j+1] = t;
	}
      }
        }
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[500];
	int t;
	for(t = 0;t < n;t++)
	scanf("%d",&a[t]);
	int i = -1;
	int b[1000];
	for(t = 0;t < n;t++)
	{
		if(a[t]%2 != 0)
		{
			i = i + 1;
			b[i] = a[t];
        }
	}
	sort(b,i+1);
	int l;
	for(l = 0;l< i+1;l++ )
	{
	if(l == i) 
		printf("%d",b[l]);
	else
		printf("%d,",b[l]);
 
   }
	return 0;
}