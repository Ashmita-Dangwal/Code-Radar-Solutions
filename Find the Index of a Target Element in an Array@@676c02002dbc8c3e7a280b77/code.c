#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            printf("%d",i);
        }
        else 
        {
            printf("-1");
        }
    }
    return 0; 
}