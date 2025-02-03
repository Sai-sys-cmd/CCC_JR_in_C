#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    char avail[6];
    
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%s", avail);
        
        if (avail[0] == 'Y') {
            a++;
        }
        
        if (avail[1] == 'Y') {
            b++;
        }
        
        if (avail[2] == 'Y') {
            c++;
        }
        
        if (avail[3] == 'Y') {
            d++;
        }
        
        if (avail[4] == 'Y') {
            e++;
        }
    }
    
    int high = a;
    
    if (b > high) {
        high = b;
    }
    
    if (c > high) {
        high = c;
    }
    
    if (d > high) {
        high = d;
    }
    
    if (e > high) {
        high = e;
    }

    int first = 0;

    if (a == high) {
        printf("1");
        first = 1;
    }

    if (b == high) {
        if (first) {
            printf(",");
        }
        printf("2");
        first = 1;
    }

    if (c == high) {
        if (first) {
            printf(",");
        }
        printf("3");
        first = 1;
    }

    if (d == high) {
        if (first) {
            printf(",");
        }
        printf("4");
        first = 1;
    }

    if (e == high) {
        if (first) {
            printf(",");
        }
        printf("5");
    }

    printf("\n");

    return 0;
}