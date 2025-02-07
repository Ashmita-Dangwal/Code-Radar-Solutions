#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    // Use fgets instead of gets (safer)
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    // Traverse the string
    while (str[i] != '\0') {
        if ((str[i] != ' ' && (i == 0 || str[i - 1] == ' '))) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}

