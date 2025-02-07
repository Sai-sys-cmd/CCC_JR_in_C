#include <stdio.h>

int main() {
    int n, hx = -1, hy = -1, lx = 1001, ly = 1001;
    scanf("%d", &n);
    getchar();
    
    char cord[20];

    for (int i = 0; i < n; i++) {
        
        int x, y;

        fgets(cord, sizeof(cord), stdin);
        
        sscanf(cord, "%d,%d", &x, &y);

        if (x > hx) hx = x;
        if (y > hy) hy = y;
        if (x < lx) lx = x;
        if (y < ly) ly = y;
    }

    printf("%d,%d\n", lx - 1, ly - 1);
    printf("%d,%d\n", hx + 1, hy + 1);

    return 0;
}