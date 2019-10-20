#include<bits/stdc++.h> 
using namespace std;
 
const int M = 100;
string ID[M];
int Age[M], Old[M];
 
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> ID[i] >> Age[i];
	//获取第一个老年人序号 
	int f = 0;
	while (f < n && Age[f] < 60)
		f++;
	Old[0] = f;
	
	int len = 1, low, high, mid;
	for (int i=f+1; i<n; i++)//对老年人插入排序（存储序号） 
	{
		if (Age[i] >= 60)
		{
			low = 0;
			high = len-1;
			while(low <= high) //折半查找插入位置
			{
				mid = (low + high)/2;
				if (Age[Old[mid]] < Age[i])
					high = mid - 1;
				else
					low = mid + 1;
			}
			for (int j=len++; j>low; j--)
		    {
				Old[j] = Old[j-1];
		    }
		    Old[low] = i; //插入序号i 
		}
	}
	
	if (f == n)//全是年轻人 
	{
		for (int i=0; i<n; i++)//输出年轻人 
			cout << ID[i] << endl;
	}
	else if (len == n)//全是老年人 
	{
		for (int i=0; i<len; i++)//输出老年人 
			cout << ID[Old[i]] << endl;
	}
	else 
	{
		for (int i=0; i<len; i++)//输出老年人 
			cout << ID[Old[i]] << endl;
		for (int i=0; i<n; i++)//输出年轻人 
		{
			if (Age[i] < 60)
				cout << ID[i] << endl;
		}
	}
	
    return 0;
}
