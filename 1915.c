#include <stdio.h>

int N=0;

int fibonacci(int n);

int main() {
    scanf("%d", &N);
    printf("%d", fibonacci(N));

    return 0;
}

int fibonacci(int n) {
    if(n<=2) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}