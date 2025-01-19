#include <stdio.h>
#include<math.h>
int main()
{
    double number;
    scanf("%1f", &number);
    number=round(number*10000)/10000.0
    printf("You entered: %.4f\n", number);
    return 0;
}