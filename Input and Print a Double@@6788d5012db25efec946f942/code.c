#include <stdio.h>
int main()
{
    double number;
    scanf("%1f", &number);
    number=(int)(number*10000);
    printf("You entered: %.4f\n", number);
    return 0;
}