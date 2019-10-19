#include <bits/stdc++.h>
using namespace std;
struct pep
{
    int num,age;
    string id;//not need string id[105];

}man[105];
int cmp(pep a,pep b)
{
    if(a.age>=60&&b.age>=60&&a.age==b.age) return a.num<b.num;
    if(a.age>=60&&b.age<60) return a.age>b.age;
    if(a.age<60&&b.age>=60) return a.age>b.age;
    if(a.age>=60&&b.age>=60&&a.age!=b.age) return a.age>b.age;
    if(a.age<60&&b.age<60) return a.num<b.num;
}


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>man[i].id>>man[i].age;
        man[i].num=i;
    }
    sort(man+1,man+1+n,cmp);
    for (int i=1;i<=n;i++){
        if(i==n)cout<<man[n].id;
        else cout<<man[i].id<<endl;
    }
    return 0;
}
