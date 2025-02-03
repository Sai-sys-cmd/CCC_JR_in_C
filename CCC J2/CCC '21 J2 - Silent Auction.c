#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char winner[20];
    int win = 0;
    
    for (int i = 0; i < n; i++) {
        char bidder[20];
        int bid;
        
        scanf("%s", bidder);
        scanf("%d", &bid);
        
        if (bid > win) {
            win = bid;
            strcpy(winner, bidder);
        }
    }
    
    printf("%s\n", winner);

    return 0;
}