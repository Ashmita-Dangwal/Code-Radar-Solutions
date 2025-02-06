#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int allsame=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]!=arr[0])
        {
            allsame=0;
        }
    }
    if allsame
    {
        return 0;
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         
            if(arr[i]+arr[j]==k)
            {
                printf("%d %d\n",arr[i],arr[j]);
                while(j+1<n&&arr[j]==arr[j+1])
                {
                    j++;
                }
            }
        }
    }
    return 0;
}