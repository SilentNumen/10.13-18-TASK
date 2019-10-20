#include <bits/stdc++.h>  
using namespace std;  
  
int jsz[10];
int osz[10]; 
int sz[10];   
  
int k=0,n=0;  
int i,j;  
  
int main()  
{  
    for(i=0; i<10; i++)  
    {  
        cin>>sz[i];  
        if(sz[i]%2==1) //如果输入的数为奇数，则把它放在奇数数组中 
        {  
            jsz[k]=sz[i];  
            k++;  
        }  
        if(sz[i]%2==0)  //如果输入的数为偶数，则把它放在偶数数组中 
        {  
            osz[n]=sz[i];  
            n++;  
        }  
    }  
  
    for(i=0; iosz[j+1])  
            {  
                int t;  
                t=osz[j];  
                osz[j]=osz[j+1];  
                osz[j+1]=t;  
            }  
        }  
    }  
  
    for(i=0; i
