#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    char str[60];
    fgets(str, 60, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'M') ||
            (str[i] >= 'a' && str[i] <= 'm')) {
            str[i] +=13;
        }
        else if ((str[i] <= 'Z' && str[i] >= 'M') ||
            (str[i] <= 'z' && str[i] >= 'm')) {
            str[i] -= 13;
        }
    }printf("%s",str);
    return 0;
}