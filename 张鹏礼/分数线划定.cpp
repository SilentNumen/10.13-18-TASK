#include<bits/stdc++.h> 
using namespace std;
struct List{
    int num;
    int score;
};

bool cmp(List a,List b)
{
    if(a.score!=b.score)
        return a.score>b.score;
    return a.num<b.num;
}

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    List pass[n];
    m*=1.5;
    for(int i=0;i<n;i++)
        cin>>pass[i].num>>pass[i].score;
    sort(pass,pass+n,cmp);
    for(int i=0;i<n;i++)
        if(pass[i].score>=pass[m-1].score)
            cnt++;
        cout<<pass[m-1].score<<" "<<cnt<<endl;
    for(int i=0;i<cnt;i++)
        cout<<pass[i].num<<" "<<pass[i].score<<endl;

    return 0;
}
