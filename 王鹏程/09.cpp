#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,fake[105],real[105];
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>fake[i];
        ans++;
        real[ans]=fake[i];

        for(int j=1;j<i;j++){
            if(fake[j]==fake[i]){
                real[i]=0;
                ans--;
                break;
            }
        }
    }
    sort(real+1,real+1+ans);
    cout<<ans<<endl;
    for(int i=1;i<=ans;i++){
        if(i==ans) cout<<real[ans];
        else cout<<real[i]<<' ';
    }
    return 0;
}
