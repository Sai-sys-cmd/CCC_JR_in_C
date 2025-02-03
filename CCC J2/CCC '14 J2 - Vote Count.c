#include <stdio.h>

int main() {

    int v, a = 0, b = 0;
    scanf("%d", &v);
    
    char s[v];
    scanf("%s", s);
    
    for (int i = 0; i < v; i++) {
        
        if (s[i] == 'A') {
            a++;
        }
        
        else if (s[i] == 'B') {
            b++;
        }
    }
    
    if (a > b) {
        puts("A");
    }
    
    else if (a < b) {
        puts("B");
    }
    
    else {
        puts("Tie");
    }

    return 0;
}