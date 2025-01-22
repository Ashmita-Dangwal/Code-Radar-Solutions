#include <stdio.h>
int main()
{
    int a;
    scanf("%a",&a);
    int lsb=a%2;
    if(lsb==1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}