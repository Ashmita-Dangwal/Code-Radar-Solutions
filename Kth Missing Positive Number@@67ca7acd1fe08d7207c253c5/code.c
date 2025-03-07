int findKthmissing(int arr[],int n,int k)
{
    int missingcount=0,current=1,index=0;
    while(missingcount<k)
    {
        if(index<n && arr[index]==current)
        {
            index++;
        }
        else
        {
            missingcount++;
            if(missingcount==k)
            {
                return current;
            }
        }
        current++;
    }
    return -1;
}