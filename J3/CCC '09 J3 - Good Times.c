#include <stdio.h>

int main() {
    
    int o, v, e, w, t, h, s;
    scanf("%d", &o);
    
    v = o - 300;
    e = o - 200;
    w = o - 100;
    t = o;
    h = o + 100;
    s = o + 130;
    
    int hours = s / 100;
    int minutes = s % 100;

    if (minutes >= 60) {
        minutes -= 60;
        hours++;
    }

    if (hours >= 24) {
        hours -= 24;
    }
    
    if (o < 0) o += 2400;
    if (v < 0) v += 2400;
    if (e < 0) e += 2400;
    if (w < 0) w += 2400;
    if (t < 0) t += 2400;
    if (h < 0) h += 2400;
    if (s < 0) s += 2400;
    
    if (o >= 2400) o -= 2400;
    if (v >= 2400) v -= 2400;
    if (e >= 2400) e -= 2400;
    if (w >= 2400) w -= 2400;
    if (t >= 2400) t -= 2400;
    if (h >= 2400) h -= 2400;
    if (s >= 2400) s -= 2400;
    
    printf("%d in Ottawa\n", o);
    printf("%d in Victoria\n", v);
    printf("%d in Edmonton\n", e);
    printf("%d in Winnipeg\n", w);
    printf("%d in Toronto\n", t);
    printf("%d in Halifax\n", h);
    printf("%d%d in St. John's\n", hours, minutes);

    return 0;
}