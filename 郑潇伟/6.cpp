# include<stdio.h>
   void sort(int *a,int len)
   {
   int i,j,t;
   for(i = 0;i < len - 1;i++)
   {
   	  for(j = 0;j < len - 1 - i;j++)
   	  {
   	   if(a[j] < a[j+1])
   	    {
   		t = a[j];
   		a[j] = a[j+1];
   		a[j+1] = t;
	}
      }
        }
}
   void sort2(int *a,int len)
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
	int b,c;
	 c = -1; 
	int a[10];
	int i[10];
	int m[10];
	int j = -1;
	for(b = 0;b < 10;b++)
{
	scanf("%d",&a[b]); 
	if(a[b]%2 == 0)
	    {
	c = c + 1;
	i[c] = a[b];	
	} 
	else
	{
	j = j + 1;
	m[j] = a[b]; 	
	    }
} 
sort(m,j+1);
sort2(i,c+1);
int p,q;
for(p = 0;p < j+1;p++)
printf("%d ",m[p]);
for(q = 0;q< c+1;q++)
printf("%d ",i[q]);

	return 0;
 } 