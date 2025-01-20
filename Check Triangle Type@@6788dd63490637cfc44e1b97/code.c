#include <stdio.h>
int main()
{
    int a,b,c;
    sacnf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}