#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    // int lsb=a%2;
    if(a & 1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}