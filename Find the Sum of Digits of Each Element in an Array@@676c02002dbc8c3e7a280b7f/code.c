#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        while(temp!=0)
        {
            int r=temp%10;
            sum+=r;
            temp/=10;
        }
    }
    printf("%d",sum);
    return 0;
}