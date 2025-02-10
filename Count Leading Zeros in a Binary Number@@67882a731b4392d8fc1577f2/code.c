#include <stdio.h>
int count_leading_zeros(unsigned int n) 
{
    if (n==0) return 32;
    int count=0;
    for (int i=31;i>=0;i--) 
    {   
        if((n>>i)&1) 
        {
            break; 
        }
        count++;
    }
    return count;
}

int main() 
{
    unsigned int num;
    scanf("%u",&num);
    int leadingZeros=count_leading_zeros(num);
    printf("%d\n", num, leadingZeros);
    return 0;
}
