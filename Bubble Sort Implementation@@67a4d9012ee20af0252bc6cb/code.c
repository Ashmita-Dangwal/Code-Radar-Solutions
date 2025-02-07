#include <stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    if(arr==NULL)
    {
        return =1;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    free(arr);
    return 0;
}