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
    int printed=0;
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j];
            if(sum==k)
            {
                if(!printed)
                {
                    printf("%d %d\n",arr[i],arr[j]);
                    printed=1;
                }
            }
        }
    }
    return 0;
}