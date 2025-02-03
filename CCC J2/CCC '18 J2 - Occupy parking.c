#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int a = 0;
    int b = 0;
    
    char y[n];
    char t[n];
    
    scanf("%s", y);
    scanf("%s", t);
    
    for (int i = 0; i < n; i++) {
        
        if (y[a] == 'C' && t[a] == 'C') {
            b++;
        }
        
        a++;
    }
    
    printf("%d", b);
    
    return 0;
}