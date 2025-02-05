#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int original=arr[i];
        if(ariginal<0)
        {
            continue;
        }
        int temp=arr[i];
        int re=0;
        while(temp !=0)
        {
            int r=temp%10;
            re=re*10+r;
            temp/=10;
        }
        if(original==re)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}