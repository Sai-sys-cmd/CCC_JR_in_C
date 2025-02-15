#include <stdio.h>
#include <string.h>

int main() {

    char str1[500001];
    char str2[500001];

    scanf("%s", str1);
    scanf("%s", str2);

    char nk = ' ', sk = ' ', qk = '-';

    int i = 0, j = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    while (i < len1 && j < len2) {

        if (str1[i] != str2[j]) {

            if (str1[i] == nk) i++, j++;  
            else if (str1[i] == qk) i++;  
            else if (nk == ' ' && qk != '-') { nk = str1[i]; sk = str2[j]; break; }
            else if (nk != ' ' && qk == '-') { qk = str1[i]; break; }

            else {
                if (i + 1 >= len1) { nk = str1[i]; sk = str2[j]; break; }

                int m = i;
                while (m < len1 && str1[m] == str1[i]) m++;

                if (m == len1) { nk = str1[i]; sk = str2[j]; break; }
                else if (str1[m] == str2[j]) { qk = str1[i]; i = m; }
                else { nk = str1[i]; sk = str2[j]; i = m; j = m; }
            }
        }

        else i++, j++;  
    }

    if (i < len1 && j >= len2) qk = str1[i];

    printf("%c %c\n", nk, sk);
    printf("%c\n", qk);

    return 0;
}