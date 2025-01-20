#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int z;
    z=b*b;
    if(a==z){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}