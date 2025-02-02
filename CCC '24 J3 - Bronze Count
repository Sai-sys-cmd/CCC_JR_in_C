#include <stdio.h>

int main() {
    int n, participants = 0;
    int f = 0, s = 0, t = 0;
    scanf("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);

        if (scores[i] > f && scores[i] > s && scores[i] > t) { 
            t = s;
            s = f;
            f = scores[i];
        } 
        
        else if (scores[i] < f && scores[i] > s && scores[i] > t) { 
            t = s;
            s = scores[i];
        } 
        
        else if (scores[i] < f && scores[i] < s && scores[i] > t) { 
            t = scores[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (scores[i] == t) {
            participants++;
        }
    }
    
    printf("%d %d\n", t, participants);

    return 0;
}