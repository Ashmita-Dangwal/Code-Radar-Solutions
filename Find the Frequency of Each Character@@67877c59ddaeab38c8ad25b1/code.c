#include <stdio.h>
#include <string.h>
void countFrequency(char str[]) 
{
    int freq[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            freq[(int)str[i]]++;
        }
    }
    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    countFrequency(str);
    return 0;
}