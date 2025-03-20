#include <stdio.h>
#include <string.h>
int areRotations(char str1[], char str2[]) 
{
    if (strlen(str1) != strlen(str2)) return 0;
    char temp[200]; 
    strcpy(temp, str1); 
    strcat(temp, str1);
    return strstr(temp, str2) != NULL; 
}
int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    // str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0';
    if (areRotations(str1, str2))
        printf("Yes");
    else
        printf("No");
    return 0;
}
