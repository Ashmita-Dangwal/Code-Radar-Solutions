#include <stdio.h>
#include <string.h>
#include <limits.h>
void findShortestWord(char str[]) 
{
    int minLength = INT_MAX;  
    int wordStart = -1, wordEnd = -1;
    int length = strlen(str);
    int currentLength = 0, start = 0; 
    for(int i = 0; i <= length; i++) 
    {
        if(str[i] != ' ' && str[i] != '\0') 
        {
            if(currentLength == 0) 
                start = i;
            currentLength++;
        } 
        else 
        {
            if(currentLength > 0 && currentLength < minLength) 
            {
                minLength = currentLength;
                wordStart = start;
                wordEnd = i - 1;
            }
            currentLength = 0; 
        }
    }
    for(int i = wordStart; i <= wordEnd; i++) 
        printf("%c", str[i]);
    printf("\n");
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    findShortestWord(str);
    return 0;
}