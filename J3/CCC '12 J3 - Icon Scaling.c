#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    
    for (int j = 0; j < n; j++) {
        
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        
        for (int i = 0; i < n; i++) {
            printf("x");
        }
        
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    for (int j = 0; j < n; j++) {
        
        for (int i = 0; i < n; i++) {
            printf(" ");
        }
        
        for (int i = 0; i < n; i++) {
            printf("x");
        }
        
        for (int i = 0; i < n; i++) {
            printf("x");
        }
        
        printf("\n");
        
    }
    
    for (int j = 0; j < n; j++) {
        
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        
        for (int i = 0; i < n; i++) {
            printf(" ");
        }
        
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        
        printf("\n");
        
    }
    

    return 0;
}