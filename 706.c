#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    char origin[20];
    scanf("%s",&origin);
    int len_or = strlen(origin);

    char insert[20];
    scanf("%s",&insert);
    int len_in = strlen(insert);

    int n;
    scanf("%d",&n);

    char new[40];
    for (int i = 0; i < len_or + len_in; i++) {
        if (i < n) {
            new[i] = origin[i];
        }else if (i < n + len_in) {
            new[i] = insert[i - n];
        }else {
            new[i] = origin[i - len_in];
        }
    }for (int i = 0; i < len_or + len_in; i++) {
        printf("%c",new[i]);
    }


    return 0;
}