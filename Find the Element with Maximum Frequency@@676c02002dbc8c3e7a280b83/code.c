#include <stdio.h>
int m(int arr[],int n)
{
    int mf=0,me=0=arr[0];
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count>mf)
    {
        mf=count;
        me=arr[i];
    }
    return me;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=m(arr,n);
    printf("%d\n",r);
    return 0;
}