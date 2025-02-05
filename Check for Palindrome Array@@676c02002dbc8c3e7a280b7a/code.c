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
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
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