#include <bits/stdc++.h>

using namespace std;

int main()
{
    int jn=0,on=0,j[10],o[10],n[10];
    for(int i=0;i<10;i++){
        cin>>n[i];
        if(n[i]%2==0){o[on]=n[i];on++;}
        else {j[jn]=n[i];jn++;}
    }
    sort(j,j+jn,greater<int>());
    sort(o,o+on);
    for(int i=0;i<jn;i++){
    if(i==9){cout <<j[9];}
    else  cout<<j[i]<<" ";
    }
    for(int i=0;i<on;i++){
    if(i==on-1){cout <<o[i];}
    else    cout<<o[i]<<" ";
    }

    return 0;
}
