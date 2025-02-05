#include <stdio.h>
void reverse(int arr[], int si,int ei)
{
    for(int i=si,j=ei;i<j;j++,i--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
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
    int k;
    scanf("%k",&k);
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n,i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}