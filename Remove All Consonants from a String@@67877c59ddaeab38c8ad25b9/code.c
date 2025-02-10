#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeConsonants(char str[]) 
{
    int j = 0;
    char result[100];
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || !isalpha(ch)) 
        {
            result[j++] = str[i]; 
        }
    }
    result[j] = '\0'; 
    printf("%s\n", result);
}

int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removeConsonants(str);
    return 0;
}