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
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int p=arr[i]*arr[j];
            if(max<p)
            {
                max=p;
            }
        }
    }
    printf("%d",p);
    return 0;
}