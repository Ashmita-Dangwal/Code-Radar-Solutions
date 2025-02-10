#include <stdio.h>
#include <string.h>
char firstUniqueChar(char str[]) 
{
    int count[256] = {0};  
    for (int i = 0; str[i] != '\0'; i++) 
    {
        count[(int)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (count[(int)str[i]] == 1) 
        {
            return str[i]; 
        }
    }
    return '\0';
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char unique = firstUniqueChar(str);
    if (unique)
        printf("%c\n", unique);
    else
        printf("-");
    return 0;
}