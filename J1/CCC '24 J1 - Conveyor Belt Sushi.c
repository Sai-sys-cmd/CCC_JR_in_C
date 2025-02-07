#include <stdio.h>

int main() {
    
    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);
    
    int c = r * 3 + g * 4 + b * 5;
    
    printf("%d", c);

    return 0;
}