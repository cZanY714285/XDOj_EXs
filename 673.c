#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int get_count(int x) {
    int count = 0;
    while (x > 0) {
        count++;
        x /= 10;
    }return count;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d ",n);

    int x = n * n;

    if (x % (int)pow(10,get_count(n)) == n) {
        printf("1");
    }else {
        printf("0");
    }

    return 0;
}