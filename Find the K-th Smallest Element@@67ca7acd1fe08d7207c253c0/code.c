void selectionSort(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int kthSmallest(int arr[],int n,int k)
{
    selectionSort(arr,n,k);
    return arr[k-1];
}