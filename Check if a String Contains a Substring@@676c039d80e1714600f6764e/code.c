#include <stdio.h>
#include <string.h>
int containsSubstring(char str[], char substr[]) 
{
    return strstr(str, substr) != NULL; 
}

int main() 
{
    char str[100], substr[100];
    fgets(str, sizeof(str), stdin);
    fgets(substr, sizeof(substr), stdin);
    if (containsSubstring(str, substr))
        printf("Yes");
    else
        printf("No");
    return 0;
}