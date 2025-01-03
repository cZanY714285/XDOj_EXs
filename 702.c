#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    int len = 1;
    int max= 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            len ++;
        }else {
            if (len > max) {
                max = len;
            }len = 1;
        }
    }
    if (len >max) {
        max = len;
    }

    printf("%d\n",max);
    return 0;
}