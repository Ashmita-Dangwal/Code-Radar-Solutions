#include<stdio.h>
int ct(unsigned int n)
{
    if(n==0) return 32;
    int count=0;
    while((n&1)==0)
    {
        count++;
        n>>1;
    }
    return count;
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    int zt=ct(n);
    printf("%d",zt);
    return 0;
}
