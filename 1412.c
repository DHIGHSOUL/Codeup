#include <stdio.h>

// ASCII에서 알파벳 소문자는 십진법으로 97(a)~122(z)
int alphabet[123] = {};
int i = 0;

int main() {
    char newString[91]; // 문자열을 입력받을 문자 배열
    gets(newString);

    char c = newString[i];
    while(c!='\0') {
        alphabet[c]++; // 현재 문자의 ASCII값을 통해 배열의 값을 증가
        c = newString[++i]; // 다음 문자를 저장함
    }

    for(i=97; i<123; i++) {
        printf("%c:%d\n", i, alphabet[i]); // 97(a)~122(z)까지 출력
    }

    return 0;
}