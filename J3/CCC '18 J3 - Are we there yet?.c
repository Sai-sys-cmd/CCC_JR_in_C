#include <stdio.h>

int main() {
    
    int a, b, c, d, x = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("0 %d %d %d %d\n", x + a, x + a + b, x + a + b + c, x + a + b + c + d);
    printf("%d 0 %d %d %d\n", x + a, x + b, x + b + c, x + b + c + d);
    printf("%d %d 0 %d %d\n", x + a + b, x + b, x + c, x + c + d);
    printf("%d %d %d 0 %d\n", x + a + b + c, x + b + c, x + c, x + d);
    printf("%d %d %d %d 0\n", x + a + b + c + d, x + b + c + d, x + c + d, x + d);

    return 0;
}