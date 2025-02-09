#include <stdio.h>
#include <string.h>

int main() {
    
    char str[35];
    scanf("%s", str);
    int len = strlen(str);
    
    
    for (int i = 0; i < len; i++) {
        
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')) {
            printf("%c", str[i]);
            
            if (str[i] == 'b' || str[i] == 'c') printf("a");
            if (str[i] == 'd' || str[i] == 'f' || str[i] == 'g') printf("e");
            if (str[i] == 'h' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l') printf("i");
            if (str[i] == 'm' || str[i] == 'n' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r') printf("o");
            if (str[i] == 's' || str[i] == 't' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z') printf("u");
            
            if (str[i] == 'b') printf("c");
            if (str[i] == 'c') printf("d");
            if (str[i] == 'd') printf("f");
            if (str[i] == 'f') printf("g");
            if (str[i] == 'g') printf("h");
            if (str[i] == 'h') printf("j");
            if (str[i] == 'j') printf("k");
            if (str[i] == 'k') printf("l");
            if (str[i] == 'l') printf("m");
            if (str[i] == 'm') printf("n");
            if (str[i] == 'n') printf("p");
            if (str[i] == 'p') printf("q");
            if (str[i] == 'q') printf("r");
            if (str[i] == 'r') printf("s");
            if (str[i] == 's') printf("t");
            if (str[i] == 't') printf("v");
            if (str[i] == 'v') printf("w");
            if (str[i] == 'w') printf("x");
            if (str[i] == 'x') printf("y");
            if (str[i] == 'y') printf("z");
            if (str[i] == 'z') printf("z");
            
        }
        
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            printf("%c", str[i]);
        }
        
    }
    
    return 0;
}