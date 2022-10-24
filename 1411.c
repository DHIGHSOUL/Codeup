#include <stdio.h>

int main() {
    int cardN = 0, tmp;
    scanf("%d", &cardN);
    tmp = cardN-1;
    int cards[cardN+1];
    for(int i=0; i<cardN+1; i++) {
        cards[i]=0;
    }

    int nowCard = 0;

    while(tmp>0) {
        scanf("%d", &nowCard);
        cards[nowCard] = 1;
        tmp--;
    }

    tmp = cardN;
    while(tmp>0) {
        if(cards[tmp]==0) {
            printf("%d", tmp);
            break;
        }
        tmp--;
    }

    return 0;
}