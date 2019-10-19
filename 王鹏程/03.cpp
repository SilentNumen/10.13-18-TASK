#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct stu{
    char name[50];
    int grade;
};
bool cmp(stu x,stu y){
    if(x.grade==y.grade)
    return strcmp(x.name,y.name)<0;//strcmp (a,b) if a==b,return 0;if a<b return '-';if a>b return '+';
    return x.grade>y.grade;
}
int main()
{
    stu a[25];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i].name>>a[i].grade;
    sort(a,a+n,cmp);
    for(int i=0;i<n;++i)
    cout<<a[i].name<<" "<<a[i].grade<<endl;
    return 0;
}
