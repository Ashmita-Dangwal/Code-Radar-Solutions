void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mInindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mInindex])
            {
                mInindex=j;
            }
        }
        if(mInindex!=i)
        {
            int temp=arr[i];
            arr[i]=arr[mInindex];
            arr[mInindex]=temp;
        }
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i>0) printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
}