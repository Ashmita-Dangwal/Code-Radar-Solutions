#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    int r=num^(1<<n);
    printf("%d\n",r);
    return 0;

}