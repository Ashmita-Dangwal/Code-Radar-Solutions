#include <stdio.h>
#include <string.h>
void firstNonRepeatedChar(char str[]) 
{
    int freq[256] = {0};
    for(int i = 0; str[i] != '\0'; i++) 
    {
        freq[(int)str[i]]++;
    }
    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(freq[(int)str[i]] == 1) 
        {
            printf("%c\n",str[i]);
            return;
        }
    }
    printf("No unique character found.\n");
}
int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    firstNonRepeatedChar(str);

    return 0;
}