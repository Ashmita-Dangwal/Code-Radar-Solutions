#include <stdio.h>
#include <string.h>
void countFrequency(char str[]) 
{
    int freq[256] = {0}; 
    for(int i = 0; str[i] != '\0'; i++) 
    {
        freq[(int)str[i]]++;
    }
    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(freq[(int)str[i]] > 0) 
        {
            if(str[i]==' ')
            printf(" : %d\n",freq[(int)str[i]]);
            else
            printf("%c: %d\n", str[i], freq[(int)str[i]]);
            freq[(int)str[i]] = 0;
        }
    }
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countFrequency(str);
    return 0;
}