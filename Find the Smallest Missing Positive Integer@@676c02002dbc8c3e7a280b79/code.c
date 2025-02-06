#include <stdio.h>
int main()
{
    int n;
    scand("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p[n+1];
    for(int i=0;i<n;i++)
    {
        p[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]<=n)
        {
            p[arr[i]]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]==0)
        {
            printf("%d",i);
        }
    }
    printf("%d",n+1);
    return 0;
}