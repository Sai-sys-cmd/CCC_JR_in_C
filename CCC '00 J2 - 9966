#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int count = 0;

    for (int i = m; i <= n; i++) {
        int num = i, rotated = 0, valid = 1;

        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || digit == 1 || digit == 8) rotated = rotated * 10 + digit;
            else if (digit == 6) rotated = rotated * 10 + 9;
            else if (digit == 9) rotated = rotated * 10 + 6;
            else {
                valid = 0;
                break;
            }
            num /= 10;
        }

        if (valid && rotated == i) count++;
    }

    printf("%d\n", count);
    return 0;
}