#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    int n;
    scanf("%d", &n);

    int chores[n];

    for (int i = 0; i < n; i++) scanf("%d", &chores[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (chores[j] > chores[j + 1]) {
                int temp = chores[j];
                chores[j] = chores[j + 1];
                chores[j + 1] = temp;
            }
            
        }
    }

    int count = 0, times = 0;

    for (int i = 0; i < n; i++) {
        
        if (times + chores[i] <= t) {
            times += chores[i];
            count++;
        } 
        
        else break;
        
    }

    printf("%d\n", count);

    return 0;
}