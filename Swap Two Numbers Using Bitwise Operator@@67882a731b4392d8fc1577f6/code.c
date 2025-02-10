#include <stdio.h>
int s(int *a,int *b)
{
    if(*a!=*b)
    {
        *a=*a^*b;
        *b=*a^*b;
        *a=*a^*b;
    }
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y)
    s(&x,&y);
    printf("%d %d",x,y);
    return 0;
}