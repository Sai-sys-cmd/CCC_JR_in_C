#include <stdio.h>

int main() {

    int k;
    scanf("%d", &k);
    getchar();
    
    char str[21];
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++) {  
        
        int s = 3 * (i + 1) + k;
        int t;

        if (str[i] == 'A') t = 1;
        if (str[i] == 'B') t = 2;
        if (str[i] == 'C') t = 3;
        if (str[i] == 'D') t = 4;
        if (str[i] == 'E') t = 5;
        if (str[i] == 'F') t = 6;
        if (str[i] == 'G') t = 7;
        if (str[i] == 'H') t = 8;
        if (str[i] == 'I') t = 9;
        if (str[i] == 'J') t = 10;
        if (str[i] == 'K') t = 11;
        if (str[i] == 'L') t = 12;
        if (str[i] == 'M') t = 13;
        if (str[i] == 'N') t = 14;
        if (str[i] == 'O') t = 15;
        if (str[i] == 'P') t = 16;
        if (str[i] == 'Q') t = 17;
        if (str[i] == 'R') t = 18;
        if (str[i] == 'S') t = 19;
        if (str[i] == 'T') t = 20;
        if (str[i] == 'U') t = 21;
        if (str[i] == 'V') t = 22;
        if (str[i] == 'W') t = 23;
        if (str[i] == 'X') t = 24;
        if (str[i] == 'Y') t = 25;
        if (str[i] == 'Z') t = 26;

        t -= s;
        while (t < 1) t += 26;  

        if (t == 1) printf("A");
        if (t == 2) printf("B");
        if (t == 3) printf("C");
        if (t == 4) printf("D");
        if (t == 5) printf("E");
        if (t == 6) printf("F");
        if (t == 7) printf("G");
        if (t == 8) printf("H");
        if (t == 9) printf("I");
        if (t == 10) printf("J");
        if (t == 11) printf("K");
        if (t == 12) printf("L");
        if (t == 13) printf("M");
        if (t == 14) printf("N");
        if (t == 15) printf("O");
        if (t == 16) printf("P");
        if (t == 17) printf("Q");
        if (t == 18) printf("R");
        if (t == 19) printf("S");
        if (t == 20) printf("T");
        if (t == 21) printf("U");
        if (t == 22) printf("V");
        if (t == 23) printf("W");
        if (t == 24) printf("X");
        if (t == 25) printf("Y");
        if (t == 26) printf("Z");
    }

    printf("\n");

    return 0;
}