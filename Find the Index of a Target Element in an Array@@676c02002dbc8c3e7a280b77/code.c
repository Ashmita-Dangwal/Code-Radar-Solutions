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
    int found=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            printf("%d",i);
            found 1;
            break;
        }
    }
    if(!found)
    {
        printf("-1");
    }
    return 0; 
}