#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    int ji = 0;
    int ou = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 1) {
            ou += i;
        }else {
            ji += i;
        }
    }printf("%d %d",ji,ou);

    return 0;
}