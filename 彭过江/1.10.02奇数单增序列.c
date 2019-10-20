#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, k[500], t, x[500], y, z;
	scanf("%d", &N);
	for(t=1,z=0;z<N;z++)
	{	
		scanf("%d", &k[z]);
		if(k[z]%2!=0)
		{
			x[t] = k[z];
			t++;
		}
	}
	quick_sort(x,1,t);
	for(y=1;y<t-1;y++)
		printf("%d,",x[y]);
	printf("%d\n",x[y]);
	return 0;
}

int quick_sort(int a[],int left,int right)
{
	int i=left;
	int j=right;
	int key=a[i];
	if(left>right)
		return; 
	if(i<j)
	{
		while(i<j&&key<a[j])
			j--;
		a[i]=a[j];
		while(i<j&&key>a[i])
			i++;
		a[j]=a[i];
	}
	a[i]=key;
 
	quick_sort(a,left,i-1);
	quick_sort(a,i+1,right);
}