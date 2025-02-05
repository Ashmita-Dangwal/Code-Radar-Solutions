#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr[i]);
    }
    int ce=0;
    int c0=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    printf("%d %d",ce,co);
    return 0;
}