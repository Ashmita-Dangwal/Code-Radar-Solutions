#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    printf("You entered: %s",str);
    return 0;
}