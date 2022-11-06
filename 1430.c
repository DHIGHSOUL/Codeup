#include <stdio.h>

int main() {
    int N, M, i, j;

    scanf("%d", &N);
    int NArr[N];
    for(i=0; i<N; i++) {
        scanf("%d", &NArr[i]);
    }

    scanf("%d", &M);
    int MArr[M];
    for(i=0; i<M; i++) {
        scanf("%d", &MArr[i]);
    }

    for(i=0; i<M; i++) {
        int exist = MArr[i];
        for(j=0; j<N; j++) {
            if(NArr[j]==exist) {
                MArr[i] = 1;
                break;
            } else {
                MArr[i] = 0;
            }
        }
    }

    for(i=0; i<M; i++) {
        printf("%d ", MArr[i]);
    }

}