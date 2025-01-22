#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    int nb=(num>>n) & 1;
    printf("%d\n",nb);
    return 0;
}