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
    int k;
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                int isdup=0;
                for(int m=0;m<i;m++)
                {
                    if(arr[m]==arr[i] && arr[m+1]==arr[j])
                    {
                        isdup =1;
                        break;
                    }
                }
                if(!isdup)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
            }
        }
    }
    return 0;
}