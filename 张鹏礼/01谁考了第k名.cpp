#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number[1000],n,k,i,j;
	double score[1000],temp;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>number[i]>>score[i];
		//cout<<number[i]<<score[i];
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(score[i]<score[i+1])
			{
				temp = score[i];
				score[i] = score[i+1];
				score[i+1]=temp;
				temp = number[i];
				number[i] = number[i+1];
				number[i+1]=temp;
			}
		}
	}
    cout<<number[k-1]<<" "<<score[k-1];
	return 0;
	
	
 } 
