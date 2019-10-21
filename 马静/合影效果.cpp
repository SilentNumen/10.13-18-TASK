∫œ”∞≈≈–Ú
#include <bits/stdc++.h>
using namespace std;
double a[200],b[200];
int main()
{
    int n,j=0,k=0;
    scanf("%d",&n);
    string s1="male";
    for(int i=0;i<n;i++)
    {
        string sex;
        double h;
        cin>>sex>>h;
        if(sex==s1)
        {
            a[j]=h;
            j++;
        }
        else
        {
            b[k]=h;
            k++;
        }
    }
        sort(a,a+j);
        sort(b,b+k);
        for(int i=0;i<j;i++)
            printf("%.2lf ",a[i]);
        for(int i=k-1;i>=0;i--)
            printf("%.2lf ",b[i]);
    return 0;
}
