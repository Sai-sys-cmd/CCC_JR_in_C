#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[101];
    scanf("%s", input);

    int i = 0;
    int len = strlen(input);

    while (i < len) {
        while (i < len && (input[i] >= 'A' && input[i] <= 'Z')) {
            printf("%c", input[i]);
            i++;
        }

        if (i < len && (input[i] == '+' || input[i] == '-')) {
            char sign = input[i];
            i++;

            int number = 0;
            while (i < len && input[i] >= '0' && input[i] <= '9') {
                number = number * 10 + (input[i] - '0');
                i++;
            }

            if (sign == '+') {
                printf(" tighten %d\n", number);
            } else if (sign == '-') {
                printf(" loosen %d\n", number);
            }
        }
    }

    return 0;
}