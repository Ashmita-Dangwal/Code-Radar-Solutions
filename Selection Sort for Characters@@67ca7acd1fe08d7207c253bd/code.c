void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        if(minIndex!=i)
        {
            swap(&arr[i],&arr[minIndex])
        }
    }
}
void printArray(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }
    printf("\n");
}