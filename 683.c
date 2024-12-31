#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int y(int a,int b,int c) {
    return (a+b+c)/3;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[30];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",y(arr[0],arr[1],arr[2]));

    for(int i=0;i<=n-3;i++) {
        printf(" %d",y(arr[i],arr[i+1],arr[i+2]));
    }
    printf(" %d",y(arr[n-3],arr[n-2],arr[n-1]));

    return 0;
}