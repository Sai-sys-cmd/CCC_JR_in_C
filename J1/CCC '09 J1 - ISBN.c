#include <stdio.h>

int main() {
    
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    int a = 91 + x * 1 + y * 3 + z * 1;
    
    printf("The 1-3-sum is %d\n", a);

    return 0;
}