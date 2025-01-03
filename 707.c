#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    char pa[21];
    char ch[21];

    gets(pa);
    gets(ch);

    int len1 = strlen(pa);
    int len2 = strlen(ch);

    if (len2 > len1) {
        printf("No!\n");
        return 0;
    }

    int found = 0;
    int index = -1;

    for (int i = 0; i <= len1 - len2; i++) {
        int match = 1;

         for (int j = 0; j < len2; j++) {
            if (pa[i + j] != ch[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            found = 1;
            index = i + 1;
            break;
        }
    }

    if (found) {
        printf("%d\n", index);
    } else {
        printf("No!\n");
    }

    return 0;
}
