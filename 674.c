#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include <math.h>

int distance_1(int x,int y) {
    return pow(x-4,2) + pow(y-4,2);
}

int distance_2(int x,int y) {
    return pow(x+4,2) + pow(y+4,2);
}

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        int x,y = 0;
        scanf("%d %d",&x,&y);
        
        if(distance_1(x,y) >= distance_2(x,y)) {
            printf("2 ");
        }else {
            printf("1 ");
        }
    }
    return 0;
}