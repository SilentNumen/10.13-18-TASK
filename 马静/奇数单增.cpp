ÆæÊýµ¥Ôö
#include <stdio.h>
int a[501];
int b[501];
int main()
{
    int N,t,i,j,k=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==1)
          {
              b[k]=a[i];
            k++;
          }
    }
    for(i=0;i<k-1;i++)
    {
        printf("%d,",b[i]);
    }
    printf("%d",b[k-1]);
    return 0;
}
