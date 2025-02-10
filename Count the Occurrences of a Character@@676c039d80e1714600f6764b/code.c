#include <stdio.h>
#include <string.h>
int countOccurrences(char str[], char ch) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            count++; 
        }
    }
    return count;
}
int main() {
    char str[100];
    char ch;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);
    int occurrences = countOccurrences(str, ch);
    printf("%d",occurrences);
    return 0;
}