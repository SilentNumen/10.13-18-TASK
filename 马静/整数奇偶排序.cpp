ÕûÊıÆæÅ¼ÅÅĞò
#include <bits/stdc++.h>
using namespace std;
int a[501];
int main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+10);

    for(i=9;i>=0;i--)
    {
        if(a[i]%2==1)
            printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    return 0;
}
