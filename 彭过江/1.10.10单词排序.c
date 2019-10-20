#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char a[100][50],temp[50];
    int n;
    int flag,j;
    k=0;
    while(scanf("%s",temp)!=EOF)
    {
        flag=1;
        for(i=0;i<k;i++)
        {
            if(strcmp(a[i],temp)==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            strcpy(a[k],temp);
            k++;
        }
    }
    n=k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(strcmp(a[j],a[k])<0)
                k=j;
        if(i!=k)
        {
            strcpy(temp,a[k]);
            strcpy(a[k],a[i]);
            strcpy(a[i],temp);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
