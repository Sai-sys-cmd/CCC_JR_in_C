#include <stdio.h>

int main() {
    
    int n, x, y = 0;
    scanf("%d", &n);
    scanf("%d", &x);
    
    y += n;
    
    for (int i = 0; i < x; i++) {
        n *= 10;
        y += n;
    }
        
    printf("%d", y);
    
    return 0;
}