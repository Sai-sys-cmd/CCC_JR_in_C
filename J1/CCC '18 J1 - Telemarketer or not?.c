#include <stdio.h>

int main() {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if ((a == 8 || a == 9) && (b == c) && (d == 8 || d == 9)) puts("ignore");
    else puts("answer");

    return 0;
}