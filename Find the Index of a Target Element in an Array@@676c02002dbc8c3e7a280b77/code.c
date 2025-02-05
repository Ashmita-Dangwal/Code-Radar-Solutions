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
    int found=0;
    int s=1;
    int index=-1;
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
            s=0;
        }
        if(arr[i]==k)
        {
            index=i;
            found=1;
            break;
        }
    }
    if(s==1)
    {
        printf("0");
    }
    else if(found==0)
    {
        printf("-1");
    }
    else{
        printf("%d",index);
    }
    return 0; 
}