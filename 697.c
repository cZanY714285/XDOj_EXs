#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    double mile;
    int t;
    scanf("%lf %d",&mile,&t);

    double fee = 0;

    if (mile <= 3) {
        fee = 10;
    }else if (mile <= 10) {
        fee = 10 + (mile - 3) * 2;
    }else {
        fee = 10 + 7 * 2 + (mile - 10) * 3;
    }
    fee += (t / 5) * 2;
    printf("%.1f",fee);
    return 0;
}