#include <stdio.h>
#include <string.h>
int is_unique(char substr[][100], char *temp, int count) {
    for (int k = 0; k < count; k++) {
        if (strcmp(substr[k], temp) == 0)
            return 0;
    }
    return 1;
}

int main() 
{
    char str[100], substr[5000][100];  
    int count = 0;
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            char temp[100] = "";
            strncpy(temp, str + i, j - i + 1);
            temp[j - i + 1] = '\0';
            if (is_unique(substr, temp, count)) {
                strcpy(substr[count++], temp);
            }
        }
    }
    printf("%d\n", count);
    return 0;
}