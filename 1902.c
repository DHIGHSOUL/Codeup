#include <stdio.h>

void revPrint(int n);

int main() {
    int n;

    scanf("%d", &n);
    revPrint(n);

    return 0;
}

void revPrint(int n) {
    if(n==0) {
        return;
    } else {
        printf("%d\n", n);
        revPrint(n-1);
    }
}