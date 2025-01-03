#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    double avy = 0;

    double a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf",&a[i]);
        avy += a[i];
    }avy /= n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (a[i] - avy) * (a[i] - avy);
    }
    double s = sqrt(sum / (n - 1));

    double max = avy + 3 * s;
    double min = avy - 3 * s;

    int num = 0;

    for (int i = 0; i < n; i++) {
        if(a[i] > max || a[i] < min) {
            num ++;
        }
    }

    printf("%.4lf %d",s,num);
    return 0;
}