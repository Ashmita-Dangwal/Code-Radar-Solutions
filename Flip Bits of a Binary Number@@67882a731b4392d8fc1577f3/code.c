#include<stdio.h>
unsigned int fb(unsigned int n)
{
    return ~n;
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    unsigned int f=fb(n);
    printf("%d",f);
    return 0;
}