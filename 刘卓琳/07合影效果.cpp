#include <bits/stdc++.h>
using namespace std;
float a[43],b[43];
int main()
{
    int n;
    cin>>n;
    int x=0,y=0;
    string s1="male",s2="female";
    for(int i=0;i<n;i++)
    {
        string sex;
        double high;
        cin>>sex>>high;
        if(sex==s1)
        {
            a[x]=high;
            x++;
        }
        else
        {
            b[y]=high;
            y++;
        }
    }
    sort(a,a+x);
    sort(b,b+y);
    for(int i=0;i<x;i++)
        printf("%.2lf ",a[i]);
    for(int i=y-1;i>=0;i--)
        printf("%.2lf ",b[i]);
    return 0;
}





