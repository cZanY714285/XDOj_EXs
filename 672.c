#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int jiecheng(int n) {
    int re = 1;
    for (int i = 1; i <= n; i++) {
        re *= i;
    }return re;
}

int main() {
    int n;
    double x;
    scanf("%d %lf",&n,&x);

    double sinx = 0;
    for(int i = 1;i<=n;i++) {
        sinx += pow(x,i*2-1) /jiecheng(i*2-1) * pow(-1,i+1);
    }
    printf("%.4lf",sinx);

    return 0;
}