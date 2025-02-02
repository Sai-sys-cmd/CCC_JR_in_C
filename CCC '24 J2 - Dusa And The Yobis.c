#include <stdio.h>

int main() {
    int d, y;
    scanf("%d", &d);
    
    while (1) {
        scanf("%d", &y);
        
        if (d > y) {
            d = d + y;
        }
        
        if (d <= y) {
            break;
        }
    }
    
    printf("%d\n", d);

    return 0;
}