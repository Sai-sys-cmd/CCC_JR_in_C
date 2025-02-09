#include <stdio.h>

int main() {
    
    int a = 0, b = 0;
    char str[10] = {0};
    
    while(!(str[0] == '7')) {
        
        fgets(str, sizeof(str), stdin);
        
        if (str[0] == '7') break;
        
        else if (str[0] == '1') {
            int val;
            sscanf(str + 4, "%d", &val);
            if (str[2] == 'A') a = val;
            if (str[2] == 'B') b = val;
        }
        
        else if (str[0] == '2') {
            if (str[2] == 'A') printf("%d\n", a);
            if (str[2] == 'B') printf("%d\n", b);
        }
        
        else if (str[0] == '3') {
            if (str[2] == 'A') a += b;
            if (str[2] == 'B') b += a;
        }
        
        else if (str[0] == '4') {
            if (str[2] == 'A') a *= b;
            if (str[2] == 'B') b *= a;
        }
        
        else if (str[0] == '5') {
            if (str[2] == 'A') a -= b;
            if (str[2] == 'B') b -= a;
        }
        
        else if (str[0] == '6') {
            if (str[2] == 'A') a /= b;
            if (str[2] == 'B') b /= a;
        }
        
    }
    
    return 0;
}