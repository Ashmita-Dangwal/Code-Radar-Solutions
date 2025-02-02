#include <stdio.h>
#include<string.h>
struct Rectangle
{
    int l;
    int b;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Rectangle r1[100];
    for(int i=0;i<n;i++)
    {
        sacnf("%d %d",&r1[i].l,&r1[i].b);
    }
    for(int i=0;i<n;i++)
    {
        float a=r1[i].l*r1[i].b;
        float p=2*(r1[i].l+r1[i].b);
        printf("Reactangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,a,p);
    }
    return 0;
}