#include <bits/stdc++.h>
int a[501],b[501];
using namespace std;
int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {
            b[k]=a[i];
            k++;
        }
    }
    sort(b,b+k);
    for(int i=0;i<k;i++)
    {
        if(i==k-1)
            printf("%d",b[i]);
        else
            printf("%d,",b[i]);
    }
    return 0;
}
