#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    string s[10];
    int cnt=0;
    while(cin>>s[++cnt]){
        cout<<s[cnt]<<endl;
    }


    /*
    char s[1009];
    scanf("%s", s);
    char ss[10][10];
    scanf("%s", ss[0])
    int n,mn=1,fn=1;
    char x[45];
    float h[45],ma[45],fe[45];
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
    char s[107];
    scanf("%s", s);
    x[0]=s[0];
    scanf("%f", &h[i]);
    if(x[i][0]=='m'){ma[mn]=h[i];mn++;}
    if(x[i][0]=='f'){fe[fn]=h[i];fn++;}
    }
    sort(ma+1,ma+mn);
    sort(fe+1,fe+fn,greater<float>());
    for(int i=1;i<mn;i++){
        printf("%.2f ",ma[i]);
    }
    for(int i=1;i<fn;i++){
        if(i<fn-1){
            printf("%.2f ",fe[i]);
        }
        else printf("%.2f",fe[i]);
    }
    /*printf("\n\n%c\n\n",x[1][0]);
    printf("%f %f %f",h[1],h[2],h[3]);*/
    return 0;
}
