#include <stdio.h>

void makeBinary(int n);

int main() {
    int n;
    scanf("%d", &n);
    makeBinary(n);

    return 0;
}

void makeBinary(int n) {
    if(n<2) {
        printf("%d", n);
        return;
    } else {
        makeBinary(n/2);
        printf("%d", n%2);
        return;
    }
}