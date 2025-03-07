void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(char arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[i],&arr[j+1]);
                swapped=1;
            }
        }
        if(!swapped) break;
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