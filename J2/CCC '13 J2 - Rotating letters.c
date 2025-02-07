#include <stdio.h>
#include <string.h>

int main() {
    
    
    char sign[30];
    scanf("%s", sign);
    int x = strlen(sign);
    int y = 0;
    
    for (int i = 0; i < x; i++) {
        if (sign[i] == 'I' || sign[i] == 'O' || sign[i] == 'S' || sign[i] == 'H' || sign[i] == 'Z' || sign[i] == 'X' || sign[i] == 'N') {
            y++;
        }
        
        else {
            puts("NO");
            break;
        }
    }
    
    if (y == x) {
        puts("YES");
    }

    return 0;
}