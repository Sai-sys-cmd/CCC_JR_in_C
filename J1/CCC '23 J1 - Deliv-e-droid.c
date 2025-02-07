#include <stdio.h>

int main() {
    
    int p;
    int c;
    
    scanf("%d", &p);
    scanf("%d", &c);
    
    int f = (p * 50) + (c * -10);
    
    if (p > c) {
        f += 500;
    }
    
    printf("%d", f);
    
    return 0;
}