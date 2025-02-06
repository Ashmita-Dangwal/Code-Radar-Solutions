#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=INT_MAX;
    int n1,n2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int d=arr[i]-arr[j];
            if(d<0)
            {
                d=-d;
            }
            if(d<m)
            {
                m=d;
                n1=arr[i];
                n2=arr[j];
            }
        }
    }
    printf("%d %d",n1,n2);
    return 0;
}