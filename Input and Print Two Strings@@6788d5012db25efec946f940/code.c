#include <stdio.h>
#include<string.h>
int main()
{
    char str[40];
    char ptr[40];
    scanf("%[^\n]s %[^\n]s",&str,&ptr);
    printf("You entered: %s and %s",str,ptr);
    return 0;
}