#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max,min;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            max=arr[i];
            min=arr[i];
        }
        else
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }  
    }
    printf("%d",max);
    printf("%d",min);
    return 0;
}