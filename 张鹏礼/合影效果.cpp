#include<bits/stdc++.h> 
using namespace std;
struct jgt{
	char xb[10];
	float sg;
}a[10001];
char s[10001];
int main()
{
	int l,n,m,k=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	 {
	 	cin>>a[i].xb>>a[i].sg;
	 }
	 for(int i=1;i<=n-1;i++)
	  {
	  	for(int j=i;j<=n;j++)
	  	 {
	  	 	if(a[i].sg>a[j].sg)
	  	 	 {
	  	 	 	swap(a[i],a[j]);
				}
		   }
	  }
	  for(int i=1;i<=n;i++)
	   {
	   	if(a[i].xb[0]=='m')
	   	 {
	   	 	printf("%.2f ",a[i].sg);
			}
	   }
	   for(int i=n;i>=1;i--)
	    {
	    	if(a[i].xb[0]=='f')
	    	 {
	    	 	printf("%.2f ",a[i].sg); 
			 }
		}
	   return 0;
}

