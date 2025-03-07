void insertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key =arr[i];
        int j=i-1;
        while(j>0  arr[i]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}