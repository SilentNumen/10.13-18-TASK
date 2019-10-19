
#include <bits/stdc++.h>
using namespace std;
struct List{
    int grade;
    int num;
};
bool cmp(List x,List y){
    if(x.grade==y.grade){return x.num<y.num;}
    else return x.grade>y.grade;

}

int main()
{
    int n,m,x=0;
    cin>>n>>m;
    m*=1.5;
    List pass[n];
    for(int i=0;i<n;i++){
        cin>>pass[i].num>>pass[i].grade;
    }
    sort(pass,pass+n,cmp);
    for(int i=0;i<n;i++){
        if(pass[i].grade>=pass[m-1].grade){
            x++;
        }
    }
    cout<<pass[m-1].grade<<" "<<x<<endl;
    for(int i=0;i<x;i++){
        cout<<pass[i].num<<" "<<pass[i].grade<<endl;
    }
    return 0;
}
