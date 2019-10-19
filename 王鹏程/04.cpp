#include <bits/stdc++.h>
using namespace std;
struct stu{
    int c;
    int m;
    int e;
    int add;
    int num;
}pip[305];


int cmp(stu a,stu b)
{
    if(a.add!=b.add){return a.add>b.add;}
    else if(a.c!=b.c){return a.c>b.c;}
    else return a.num<b.num;
}



int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>pip[i].c>>pip[i].m>>pip[i].e;
        pip[i].num=i;
        pip[i].add=pip[i].c+pip[i].m+pip[i].e;
    }
    sort(pip+1,pip+n+1,cmp);
    for(int i=1;i<=5;i++){
        cout<<pip[i].num<<" "<<pip[i].add<<endl;
    }

    return 0;
}
