#include <stdio.h>
int p(int arr[],int s)
{
    for(inti=0;i<s/2;i++)
    {
        if(arr[i]!=arr[s-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(p==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}