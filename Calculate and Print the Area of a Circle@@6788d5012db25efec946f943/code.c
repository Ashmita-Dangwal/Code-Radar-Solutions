#include <stdio.h>
int main()
{
    float radius;
    sacnf("%.1f",&radius);
    float area;
    area=3.14*radius*radius;
    printf("Area: %.2f\n",area);
    return 0;
}