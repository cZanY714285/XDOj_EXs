#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);

    int yes = 1;
    int m = pow(2,n) - 1;
    for(int i=2;i<= sqrt(m);i++) {
        if (m % i != 0) {
            yes = 0;
            break;
        }
    }printf("%d %d",m,yes);
    return 0;
}