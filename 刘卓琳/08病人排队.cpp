#include <bits/stdc++.h>
using namespace std;
struct man
{
    char id[10];
    int age;
};
int main()
{
    struct man a[101];
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].id>>a[i].age;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((a[j].age<a[j+1].age)&&(a[j].age>=60||a[j+1].age>=60))
                swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i].id<<endl;
    return 0;
}
