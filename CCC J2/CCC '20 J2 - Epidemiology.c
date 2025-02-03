#include <stdio.h>

int main() {
    int p, n, r, d = 0, t = 0; 

    scanf("%d", &p);
    scanf("%d", &n);
    scanf("%d", &r);

    t = n;

    while (t <= p) {
        d++;
        n *= r;
        t += n;
    }

    printf("%d\n", d);

    return 0;
}