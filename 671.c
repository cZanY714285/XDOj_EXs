#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# include <tgmath.h>

int main() {
    int n;
    scanf("%d",&n);

    int avy = 0;
    int p = 0;

    int arr[30];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        avy += arr[i];
    }avy /= n;

    for(int i=0;i<n;i++) {
        p += pow(arr[i] - avy,2);
    }p /= n;

    printf("%d",p);

    return 0;
}