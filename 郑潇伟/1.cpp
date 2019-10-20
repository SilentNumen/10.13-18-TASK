# include<stdio.h>
void sort(float *a,int len,int * b)
   {
   int i,j,c;
float t;
   for(i = 0;i < len - 1;i++)
   {
   	  for(j = 0;j < len - 1 - i;j++)
   	  {
   	   if(a[j] < a[j+1])
   	    {
   		t = a[j];
   		c = b[j];
   		a[j] = a[j+1];
   		b[j] = b[j+1];
   		a[j+1] = t;
   		b[j+1] = c;
	   }
      }
    }
}
int main()
{
	int i,k;
	scanf("%d %d",&i,&k);
	int m,n;
	int a[1000];
	float b[1000];
	for(m = 0;m < i;m++)
{

     scanf("%d",&a[m]);
	 scanf("%f",&b[m]);
}
sort(b,m,a);

printf("%d %g",a[k-1],b[k-1]);
	return 0;
}