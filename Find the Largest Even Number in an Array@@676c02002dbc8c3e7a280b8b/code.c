#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        max=arr[0];
        if(arr[i]>max)
        {
            if(arr[i]%2==0)
            max=arr[i];
            printf("%d",max);
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}