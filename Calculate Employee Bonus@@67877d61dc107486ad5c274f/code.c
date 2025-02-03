#include <stdio.h>
#include<stdio.h>
struct Employee
{
    int r;
    char n[50];
    int s;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct  Employee e[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %d",&e[i].r,e[i].n,&e[i].s);
    }
    for(int i=0;i<n;i++)
    {
        float f;
        if(e[i].s<50000)
        {
            f=(e[i].s*10)/100.0;
        }
        else
        {
            f=(e[i].s*5)/100.0;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",e[i].r,e[i].n,f);
    }
    return 0;
}