#include <stdio.h>

int getLowestSetBitPosition(int n) {
    int position = 0;
    
    while (n > 0) {
        if (n & 1) {
            return position;
        }
        position++;
        n >>= 1;  // Right shift n by 1
    }
    
    return -1;  // If no set bit is found (should not occur for positive numbers)
}

int main() {
    int num;
    scanf("%d", &num);
    
    int result = getLowestSetBitPosition(num);
    printf("%d\n", result);

    return 0;
}