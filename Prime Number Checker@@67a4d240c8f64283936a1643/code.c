#include <stdio.h>
int isPrime(int num)
{
    if(num<2) return 0;
    if(num==2) return 1;
    if(num%2==0) return 0;
    for(int i=3;i<=num/3;i+=2)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}