#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int main() {
    int n;
    int m;
    scanf("%d %d",&n,&m);

    m -= 1;

    int max = 0;
    int min = 20;

    int sum = 0;

    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    float score = 0;
    if (arr[m] == max) {
        sum -= min;
        score = (float)sum / (n - 1);
    }else if (arr[m] == min) {
        sum -= max;
        score = (float)sum / (n - 1);
    }else {
        sum -= min + max;
        score = (float)sum / (n - 2);
    }
    printf("%.2f\n",score);

    return 0;
}