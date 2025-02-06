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
                int dup=0;
                for(int m=0;m<i;m++)
                {
                    if(arr[m]==arr[i])
                    {
                        dup =1;
                        break;
                    }
                }
                if(dup!=1)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
            }
        }
    }
    return 0;
}