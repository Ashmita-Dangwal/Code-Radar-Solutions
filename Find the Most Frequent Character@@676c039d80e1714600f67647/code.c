#include <stdio.h>
#include <string.h>
char mostFrequentChar(char str[]) {
    int count[256] = {0};
    char maxChar = str[0]; 
    int maxCount = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i]=='\n' || str[i]==' ') continue;
        count[(int)str[i]]++;

        if (count[(int)str[i]] > maxCount || (count[(int)str[i]] == maxCount && str[i] < maxChar)) 
        {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}
int main() 
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("%c", mostFrequentChar(str));
    return 0;
}