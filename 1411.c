#include <stdio.h>

int main() {
    int cardN = 0, tmp; // 카드 개수를 입력받을 변수와 임시로 저장할 변수
    scanf("%d", &cardN);
    tmp = cardN;
    int cards[cardN+1]; // 주운 카드의 숫자를 저장할 배열
    for(int i=0; i<cardN+1; i++) {
        cards[i]=0;
    } // 초기화

    int nowCard = 0; // 현재 주운 카드의 숫자를 입력받을 변수

    while(tmp>1) {
        scanf("%d", &nowCard);
        cards[nowCard] = 1; // 주운 카드의 배열 요소를 +1
        tmp--;
    }

    tmp = cardN;
    while(tmp>0) {
        if(cards[tmp]==0) { // 주워지지 않은 배열 요소(값이 0인) 인덱스를 출력 후 break;
            printf("%d", tmp);
            break;
        }
        tmp--;
    }

    return 0;
}