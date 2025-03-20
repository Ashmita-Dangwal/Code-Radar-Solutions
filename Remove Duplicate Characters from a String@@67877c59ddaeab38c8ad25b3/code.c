#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[]) 
{
    int seen[256] = {0};
    int index = 0;        
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (!seen[(int)str[i]]) 
        { 
            seen[(int)str[i]] = 1; 
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    removeDuplicates(str);
    printf("%s",str);
    return 0;
}
