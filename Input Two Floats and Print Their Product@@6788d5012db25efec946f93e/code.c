#include <stdio.h>
int main()
{
    float a,b;
    sacnf("%f %f",&a,&b);
    float z;
    z=a*b;
    printf("Product: %.2f",z);
    return 0;
}