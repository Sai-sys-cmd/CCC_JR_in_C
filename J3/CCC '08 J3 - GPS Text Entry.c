#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int count = 0;
    
    char str[50];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    
    int x = 0, y = 0;

    for (int i = 0; i < len; i++) {
        
        int xx = 0, yy = 0;
        
        if (str[i] == 'A') { xx = 0; yy = 0; }
        if (str[i] == 'B') { xx = 1; yy = 0; }
        if (str[i] == 'C') { xx = 2; yy = 0; }
        if (str[i] == 'D') { xx = 3; yy = 0; }
        if (str[i] == 'E') { xx = 4; yy = 0; }
        if (str[i] == 'F') { xx = 5; yy = 0; }
        if (str[i] == 'G') { xx = 0; yy = 1; }
        if (str[i] == 'H') { xx = 1; yy = 1; }
        if (str[i] == 'I') { xx = 2; yy = 1; }
        if (str[i] == 'J') { xx = 3; yy = 1; }
        if (str[i] == 'K') { xx = 4; yy = 1; }
        if (str[i] == 'L') { xx = 5; yy = 1; }
        if (str[i] == 'M') { xx = 0; yy = 2; }
        if (str[i] == 'N') { xx = 1; yy = 2; }
        if (str[i] == 'O') { xx = 2; yy = 2; }
        if (str[i] == 'P') { xx = 3; yy = 2; }
        if (str[i] == 'Q') { xx = 4; yy = 2; }
        if (str[i] == 'R') { xx = 5; yy = 2; }
        if (str[i] == 'S') { xx = 0; yy = 3; }
        if (str[i] == 'T') { xx = 1; yy = 3; }
        if (str[i] == 'U') { xx = 2; yy = 3; }
        if (str[i] == 'V') { xx = 3; yy = 3; }
        if (str[i] == 'W') { xx = 4; yy = 3; }
        if (str[i] == 'X') { xx = 5; yy = 3; }
        if (str[i] == 'Y') { xx = 0; yy = 4; }
        if (str[i] == 'Z') { xx = 1; yy = 4; }
        if (str[i] == ' ') { xx = 2; yy = 4; }
        if (str[i] == '-') { xx = 3; yy = 4; }
        if (str[i] == '.') { xx = 4; yy = 4; }
        
        count += abs(x - xx) + abs(y - yy);
        
        x = xx;
        y = yy;
        
    }

    count += abs(x - 5) + abs(y - 4);
    
    printf("%d\n", count);

    return 0;
}