#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int gongbei(int a,int b) {
    // a > b
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a == b) {
        return a;
    }
    for (int i = a; i < a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}


int main() {
    int n;
    scanf("%d",&n);

    int sum = 0;
    int x = 0;

    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++) {
        x = gongbei(arr[i],arr[i-1]);
        sum += x;
    }
    printf("%d",sum);
    return 0;
}