#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

void bubble(char s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    char s[100];
    fgets(s,sizeof(s),stdin);

    int len = strlen(s);

    if (s[len-1] == '\n') {
        s[len-1] = '\0';
        len--;
    }

    int count = 0;

    for (int i=0;i<len;i++) {
        if (s[i] != '*') {
            s[count++] = s[i];
        }
    }bubble(s,count);
    for (int i=0;i<count;i++) {
        printf("%c",s[i]);
    }
    return 0;
}
