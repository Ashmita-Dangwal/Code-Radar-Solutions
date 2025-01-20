#include <stdio.h>
int main()
{
    int n;
    int a=0;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(int i==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}