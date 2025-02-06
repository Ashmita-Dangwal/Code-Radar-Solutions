#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t[n],count=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            t[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=t[i];
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}