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
        for(int j=0;j<i;j++)
        {
            if(i%j==0)
            {
                count++
                prime=0;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}