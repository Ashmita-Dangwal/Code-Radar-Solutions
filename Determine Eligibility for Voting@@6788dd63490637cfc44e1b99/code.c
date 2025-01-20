#include <stdio.h>
int main()
{
    int a;
    sacnf("%d",&a);
    if(a>=18)
    {
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}