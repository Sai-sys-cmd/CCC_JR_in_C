#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    
    if ((a+b+c+d) == (e+f+g+h) && (e+f+g+h) == (i+j+k+l) && (i+j+k+l) == (m+n+o+p) &&
        (a+e+i+m) == (b+f+j+n) && (b+f+j+n) == (c+g+k+o) && (c+g+k+o) == (d+h+l+p)) {
        printf("magic\n");
    } 
    
    else {
        printf("not magic\n");
    }
    
    return 0;
}