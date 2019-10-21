#include <bits/stdc++.h>
using namespace std;
string a[101],c[101];
int main()
{
    int i,m=1,n;
    for(i=0;i<101;i++)
    {
        cin >> a[i];
        n=cin.get();
        if(n=='\n')
            break;
    }
    sort(a,a+i+1);
    c[0]=a[0];
    for(int j=1;j<=i;j++)
    {
        if(a[j]!=a[j-1])
        {
            c[m]=a[j];
            m++;
        }
    }
    for(int j=0;j<m;j++)
    {
        cout<<c[j]<<endl;
    }
    return 0;
}
