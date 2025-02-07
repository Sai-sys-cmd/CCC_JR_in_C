#include <stdio.h>

int main() {
    int n, p, f, t = 0;
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &p);
        scanf("%d", &f);
        
        if (p * 5 - f * 3 > 40) {
            t += 1;
        }
    }
    
    printf("%d", t);
    
    if (n == t) {
        printf("+");
    }
    
    return 0;
    
}