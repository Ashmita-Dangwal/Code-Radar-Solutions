int findOccurrence(int arr[],int n,int target,char mode)
{
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            index=i;
            if(mode=='F')
            return index;
        }
    }
    return index;
}