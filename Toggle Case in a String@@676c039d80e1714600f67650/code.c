#include <stdio.h>
#include <ctype.h>
void toggleCase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (islower(str[i])) 
        {
            str[i] = toupper(str[i]);
        } 
        else if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]); 
        }
    }
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    toggleCase(str);
    printf("%s", str);
    return 0;
}