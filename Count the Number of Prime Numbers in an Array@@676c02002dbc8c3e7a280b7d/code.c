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
    int count =0;
    for(int i=0;i<n;i++)
    {
        int p=1;
        if(arr[i]<2)
        {
            p=0;
        }
        else{
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                p=0;
                break;
            }
        }
        }
        if(p==1)
        {
            cunt++;
        }
    }
    printf("%d",count);
}