#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

double f(double x,double a) {
    return -pow(x,3) + a * pow(x,2);
}

int main() {
    double a;
    scanf("%lf",&a);
    double max = 0;
    for (double i = 0; i <= 10; i += 0.0001) {
        if(f(i,a) > max) {
            max = f(i,a);
        }
    }printf("%.2f",max);

    return 0;
}