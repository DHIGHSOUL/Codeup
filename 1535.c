#include <stdio.h>

int n, d[110];

int f() {
    int max = -1, maxIndex = 0;
    for(int i=0; i<n; i++) {
        if(max<d[i]) {
            max = d[i];
            maxIndex = i+1;
        }
    }
    return maxIndex;
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &d[i]);
    }

    printf("%d", f());

    return 0;
}