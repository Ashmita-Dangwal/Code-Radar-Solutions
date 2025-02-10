#include <stdio.h>
#include <string.h>
void replaceVowels(char str[], char replacement) 
{
    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(strchr("AEIOUaeiou", str[i]))
        {
            str[i] = replacement;
        }
    }
}
int main() 
{
    char str[100],replacement;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf("%s",&replacement);
    replaceVowels(str, replacement);
    printf("%s", str);
    return 0;
}