#include<bits/stdc++.h>
using namespace std;
 
struct paid
{
    int n,c,sum;
};
 
int cmp(paid x,paid y)
{
    if(x.sum!=y.sum)    return x.sum>y.sum;
    if(x.sum==y.sum)
    {
        if(x.c!=y.c)    return x.c>y.c;
        else            return x.n<y.n;
    }
    return 0;
}
 
int main()
{
    int n;
    while(cin>>n)
    {
        int i,m,e;
        paid a[10000];
        for(i=0;i<n;i++)
        {
            cin>>a[i].c>>m>>e;
            a[i].n=i+1;
            a[i].sum=a[i].c+m+e;
        }
        sort(a,a+n,cmp);
        for(i=0;i<5;i++)
            cout<<a[i].n<<"  "<<a[i].sum<<endl;
    }
    return 0;
}
