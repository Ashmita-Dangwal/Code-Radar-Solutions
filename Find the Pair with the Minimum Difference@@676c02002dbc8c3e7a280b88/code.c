#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n==1)
    {
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    if(n1>n2)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    printf("%d %d",n1,n2);
    return 0;
}