#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char string[81];
    getchar();
    
    for (int i = 0; i < n; i++) {
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0';

        int a = 1;
        
        for (int j = 1; j < strlen(string); j++) {
            
            if (string[j] == string[j - 1]) {
                a++;
            } 
            
            else {
                printf("%d %c ", a, string[j - 1]);
                a = 1;
            }
            
        }
        
        printf("%d %c\n", a, string[strlen(string) - 1]);
        
    }

    return 0;
}