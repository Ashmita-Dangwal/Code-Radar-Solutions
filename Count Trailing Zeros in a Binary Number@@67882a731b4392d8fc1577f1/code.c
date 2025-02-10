#include <stdio.h>
int count_trailing_zeros(unsigned int n) {
    if(n==0) return 32;
    int count=0;
    while((n&1)==0) 
    { 
        count++;
        n>>=1; 
    }
    return count;
}
int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    int trailingZeros = count_trailing_zeros(num);
    printf("%d\n",trailingZeros);
    return 0;
}
