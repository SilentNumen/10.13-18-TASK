#include <bits/stdc++.h>
using namespace std;
int a[101],c[101];
int main()
{
    int N,m=1;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+N);
    c[0]=a[0];
    for(int i=1;i<N;i++)
    {
        if(a[i]!=a[i-1])
        {
            c[m]=a[i];
            m++;
        }
    }
    printf("%d\n",m);
    for(int i=0;i<m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
