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
    str[strcspn(str, "\n")] = '\0';
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';
    if (containsSubstring(str, substr))
        printf("Yes");
    else
        printf("No");
    return 0;
}