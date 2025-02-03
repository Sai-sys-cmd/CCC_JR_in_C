#include <stdio.h>
#include <string.h>

int main() {

    char message[255];
    fgets(message, 255, stdin);
    int l = strlen(message);
    int h = 0, s = 0;
    
    for (int i = 0; i < l - 2; i++) {
        
        if (message[i] == ':' && message[i + 1] == '-' && message[i + 2] == ')') {
            h++;
        }
        
        if (message[i] == ':' && message[i + 1] == '-' && message[i + 2] == '(') {
            s++;
        }
    }
    
    if (h == 0 && s == 0) {
        puts("none");
    }
    else if (h > s) {
        puts("happy");
    }
    else if (s > h) {
        puts("sad");
    }
    else {
        puts("unsure");
    }
    
    return 0;
}