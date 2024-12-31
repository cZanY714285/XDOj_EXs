#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

double get_Pn(int n,double x) {
    if (n == 0) {
        return 1;
    }else if (n == 1) {
        return x;
    }else {
        return ((2 * n - 1) * x * get_Pn(n-1,x) -
            (n - 1) * get_Pn(n-2,x)) / n;
    }
}


int main() {
    int n;
    double x;
    scanf("%d %lf",&n,&x);

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += get_Pn(i,x);
    }
    printf("%.4f",sum);
    return 0;
}