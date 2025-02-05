#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int arr[i]=0;arr[i]!=0;arr[i]++)
        {
            int r=arr[i]%10;
            sum+=r;
            arr[i]/=10;
            printf("%d",sum);
        }
    }
    return 0;
}