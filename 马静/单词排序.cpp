#include <bits/stdc++.h>
using namespace std;
int main()
{
    string words1[100],words2[101];
    char c;
    int i=0,h=0;
    for(;;i++)
    {
        cin>>words1[i];
        c=cin.get();
        if(c=='\n')break;
    }
    for (int j=0;j<=i;j++)
    {
        for(int k=0;k<=i;k++)
        {
            if(words1[j]==words1[k] &&j!=k)
            {
                words1[k]="0";
            }
        }
    }
    for(int g=0;g<=i;g++)
    {
        if(words1[g]!="0")
        {
            words2[h]=words1[g];
            h++;
        }
    }
    sort(words2,words2+h);
    for(int g=0;g<h;g++)
    {
        cout <<words2[g]<< endl;
    }
    return 0;
}
