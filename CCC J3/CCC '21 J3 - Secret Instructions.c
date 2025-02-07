#include <stdio.h>
#include <string.h>

int main() {
    char string[6], prev_direction[10] = "";  

    while (1) {
        scanf("%s", string);

        if (strcmp(string, "99999") == 0) {
            break;
        }

        int sum = (string[0] - '0') + (string[1] - '0');

        if (sum == 0) {
            printf("%s ", prev_direction);
        } 
        else if (sum % 2 == 0) {
            printf("right ");
            strcpy(prev_direction, "right");  
        } 
        else {
            printf("left ");
            strcpy(prev_direction, "left");  
        }

        printf("%c%c%c\n", string[2], string[3], string[4]);
    }

    return 0;
}
