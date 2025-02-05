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
    int num;
    for(int i=0;i<n;i++)
    {
        int original=arr[i];
        while(arr[i] !=0)
        {
            int r=arr[i]%10;
            int re=re*10+r;
            arr[i]/=10;
        }
        if(original==re)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}