#include <stdio.h>
#include <string.h>

int main() {
    
    char str[600000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str) - 1;

    int cl = 0, cm = 0, cs = 0;
    
    for (int i = 0; i < len; i++) {
        if (str[i] == 'L') cl++;
        else if (str[i] == 'M') cm++;
        else if (str[i] == 'S') cs++;
    }

    int misl = 0, mism = 0, miss = 0;
    int mml = 0, mlm = 0;

    for (int i = 0; i < cl; i++) {
        if (str[i] != 'L') {
            misl++;
            if (str[i] == 'M') mml++;
        }
    }

    for (int i = cl; i < cl + cm; i++) {
        if (str[i] != 'M') {
            mism++;
            if (str[i] == 'L') mlm++;
        }
    }

    for (int i = cl + cm; i < len; i++) {
        if (str[i] != 'S') miss++;
    }

    int swaps = (mml > mlm) ? mml : mlm;

    swaps += (misl - mml) + (mism - mlm);
    
    printf("%d\n", swaps);
    
    
    return 0;
}