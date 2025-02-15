#include <stdio.h>
#include <string.h>

int main() {

    char str1[1001];
    char str2[1001];
    scanf("%s", str1);
    scanf("%s", str2);
    int no = 0;
    
    int len = strlen(str2);
    
    for (int i = 0; i < len; i++) {
        
        char temp[1001];
        
        for (int j = 0; j < len; j++) {
            temp[j] = str2[(i + j) % len];
        }
        
        temp[len] = '\0';
        
        for (int k = 0; k <= strlen(str1) - len; k++) {
            if (strncmp(&str1[k], temp, len) == 0) {
                puts("yes");
                no++;
                break;
            }
        }
        
        if (no > 0) break;
        
    }
    
    if (no == 0) puts("no");

    return 0;
}