#include <stdio.h>

int main() {

    int n, x, y, a = 100, d = 100;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        
        scanf("%d %d", &x, &y);
        
        if (x > y) {
            d -= x;
        }
        
        else if (x < y) {
            a -= y;
        }
        
        else if (x == y) {
            d -= 0;
            a -= 0;
        }
        
    }
    
    printf("%d\n", a);
    printf("%d\n", d);

    return 0;
}