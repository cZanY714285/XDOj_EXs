#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int is_tri(int x,int y,int z) {
    if (x + y > z && y + z > x && z + x > y) {
        return 1;
    }else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d",&n);

    int sum = 0;

    int arr[30];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-2;i++) {
        sum += is_tri(arr[i],arr[i+1],arr[i+2]);
    }printf("%d",sum);
    return 0;
}