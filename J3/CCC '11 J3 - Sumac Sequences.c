#include <stdio.h>

int main() {
    
    int a, b, c = 2;
    scanf("%d %d", &a, &b);

    while (a >= b) {
        
        int t = a - b;
        
        a = b;
        b = t;
        c++;
        
    }

    printf("%d\n", c);
    
    return 0;
    
}