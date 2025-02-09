#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c, d, t;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &t);
    
    int dist = abs(a - c) + abs(b - d);
    
    if (dist <= t && (t - dist) % 2 == 0) {
        puts("Y\n");
    }
    
    else {
        puts("N\n");
    }
    
    return 0;
}