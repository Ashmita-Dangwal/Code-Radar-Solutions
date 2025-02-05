#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min[n];
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
    return 0;

}