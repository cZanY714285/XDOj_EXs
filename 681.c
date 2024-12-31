#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int wanted(int n,int a,int b,int c) {
    if (a == 3 && b == 5 && c == 7) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d",&n);

    int sum = 0;

    int a[30];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-2;i++) {
        sum += wanted(n,a[i],a[i+1],a[i+2]);
    }printf("%d",sum);
    return 0;
}