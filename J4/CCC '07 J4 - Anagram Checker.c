#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[500], str2[500];
    
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    int c1[26] = {0};
    int c2[26] = {0};
    
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != ' ') {
            c1[str1[i] - 'A']++;
        }
    }
    
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != ' ') {
            c2[str2[i] - 'A']++;
        }
    }
    
    int ia = 1;
    
    for (int i = 0; i < 26; i++) {
        if (c1[i] != c2[i]) {
            ia = 0;
            break;
        }
    }
    
    if (ia) puts("Is an anagram.");
    else puts("Is not an anagram.");
    
    return 0;
}