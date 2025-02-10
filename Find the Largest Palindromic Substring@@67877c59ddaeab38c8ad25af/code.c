#include <stdio.h>
#include <string.h>

int main() {
    char s[100], result[100];  
    scanf("%s", s);
    int n = strlen(s), start = 0, maxLen = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int isPal = 1;
            for (int x = i, y = j; x < y; x++, y--) {
                if (s[x] != s[y]) {
                    isPal = 0;
                    break;
                }
            }
            if (isPal && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
    printf("%s\n", result);
    return 0;
}