#include <stdio.h>
int main()
{
    int n;
    int p=1;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
    }
    return 0;
}