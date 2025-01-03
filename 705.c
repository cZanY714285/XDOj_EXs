#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    // k = 2 ^ (n-1)
    int k = pow(2,n-1);

    int a[70];
    for (int i = 0; i < 2 * k; i++) {
        scanf("%d",&a[i]);
    }

    while (m > 0) {
        for (int i = 0; i < k;i++) {
            a[i] += a[k * 2-i-1];
            a[k * 2-i-1] = 0;
        }
        k /= 2;
        m--;
    }
    for (int i = 0; i < k * 2; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}