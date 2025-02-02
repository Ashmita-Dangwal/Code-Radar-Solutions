#include <stdio.h>
struct Rectangle
{
    int l;
    int b;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Rectangle r1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&r1[i].l,&r1[i].b);
    }
    for(int i=0;i<n;i++)
    {
        float Area=r1[i].l*r1[i].b;
        float Perimeter=2*(r1[i].l+r1[i].b);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,Area,Perimeter);
    }
    return 0;
}