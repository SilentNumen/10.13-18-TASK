#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[500],b,n,j=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		cin>>b;
		if(b%2!=0)
		{
			a[j]=b;
			j++;
		}
	}
	int h,k;
	for(h=0;h<j-1;h++)
	{
		for(k=0;k<j-h-1;k++)
		{
			if(a[k]>a[k+1])
			{
				int temp;
				temp = a[k];
				a[k] = a[k+1];
				a[k+1]=temp;
			}
			
		}
	}
	for(int i=0;i<j;i++)
	{
		cout<<a[i];
 	    if(i!=j-1)
	    cout<<",";
	}
	return 0;
	
}
