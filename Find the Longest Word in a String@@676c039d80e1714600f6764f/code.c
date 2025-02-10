#include <stdio.h>
#include <string.h>
void findLongestWord(char str[]) 
{
    int maxLen = 0, wordLen = 0, start = 0, maxStart = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') {  
            if (wordLen == 0) start = i;
            wordLen++;  
        } 
        else 
        {
            if (wordLen > maxLen) 
            { 
                maxLen = wordLen;
                maxStart = start;
            }
            wordLen = 0;
        }
    }
    if (wordLen > maxLen) 
    {
        maxLen = wordLen;
        maxStart = start;
    }
    for (int i = maxStart; i < maxStart + maxLen; i++) 
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main() 
{
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    findLongestWord(str);
    return 0;
}