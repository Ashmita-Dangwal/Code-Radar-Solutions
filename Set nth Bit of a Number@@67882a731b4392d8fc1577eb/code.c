#include <stdio.h>
unsigned int s(unsigned int num,int n)
{
    return num |(1<<n);
}
int main()
{
    unsigned int num;
    int n;
    scanf("%u %d",&num,&n);
    if(n<0||n>32)
    {
        printf("0");
        return 1;
    }
    unsigned int result=s(num,n);
    printf("%u",result);
    return 0;
}