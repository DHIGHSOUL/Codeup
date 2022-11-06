#include <stdio.h>

int main() {
    int n = 0, count=1;
    scanf("%d", &n);
    int nArr[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            nArr[i][j] = count++;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }
}