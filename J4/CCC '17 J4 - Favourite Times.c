#include <stdio.h>

int main() {
    
    int d, t = 0;
    scanf("%d", &d);
    
    int h1 = 1, h2 = 2, m1 = 0, m2 = 0;
    
    while (d >= 720) {
        d -= 720;
        t += 31;
    }
    
    for (int i = 0; i <= d; i++) {
        
        if (h1 == 0) {
            if (h2 - m1 == m1 - m2) t++;
        }
        
        else if (h1 > 0) {
            if ((h1 - h2 == h2 - m1) && (h2 - m1 == m1 - m2)) t++;
        }
        
        m2++;
        
        
        if (m2 == 10) {
            m2 = 0;
            m1++;
        }
        
        if (m1 == 6) {
            m1 = 0;
            m2 = 0;
            h2++;
        }
        
        if (h2 == 10) {
            h2 = 0;
            m1 = 0;
            m2 = 0;
            h1++;
        }
        
        if (h1 == 1 && h2 == 3) {
            h1 = 0;
            h2 = 1;
            m1 = 0;
            m2 = 0;
        }
        
    }
    
    printf("%d\n", t);
    
    return 0;
}