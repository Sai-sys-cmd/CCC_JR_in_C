#include <stdio.h>
#include <string.h>

int main() {
    int n, z = 0;
    scanf("%d", &n);
    
    getchar();
    
    int p = 1500;
    int m = 6000;
    int s = 15500;
    int c = 40000;
    int t = 75000;
    int h = 125000;
    
    for (int i = 0; i < n; i++) {
        char y[10];
        scanf("%s", y);
        
        if (strcmp(y, "Poblano") == 0) {
            z += p;
        }
        else if (strcmp(y, "Mirasol") == 0) {
            z += m;
        }
        else if (strcmp(y, "Serrano") == 0) {
            z += s;
        }
        else if (strcmp(y, "Cayenne") == 0) {
            z += c;
        }
        else if (strcmp(y, "Thai") == 0) {
            z += t;
        }
        else if (strcmp(y, "Habanero") == 0) {
            z += h;
        }
    }
    
    printf("%d\n", z);

    return 0;
}