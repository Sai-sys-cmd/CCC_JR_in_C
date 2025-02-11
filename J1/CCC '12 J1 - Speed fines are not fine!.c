#include <stdio.h>

int main() {
    
    int lim, speed, diff;
    scanf("%d %d", &lim, &speed);
    diff = speed - lim;
    
    if (lim >= speed) puts("Congratulations, you are within the speed limit!");
    else if (0 < diff && diff < 21) puts("You are speeding and your fine is $100.");
    else if (20 < diff && diff < 31) puts("You are speeding and your fine is $270.");
    else if (30 < diff) puts("You are speeding and your fine is $500.");
    
    return 0;
}