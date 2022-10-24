#include <stdio.h>

char password[20] = {}; // 비밀번호를 입력받을 문자 배열
char encoded[20] = {}; // 비밀번호를 변화시킬 문자 배열
char c; // 비밀번호의 각 문자를 저장할 문자 변수
int i = 0;

int main() {
    gets(password); // 비밀번호 입력받음

    c = password[i];
    while(c!='\0') {
        encoded[i] = c+2; // 비밀번호 암호화 후
        printf("%c", encoded[i++]); // 즉시 출력
        c = password[i];
    }

    printf("\n");

    i = 0;
    c = password[i];
    while(c!='\0') {
        encoded[i] = (c*7)%80+48;
        printf("%c", encoded[i++]);
        c = password[i];
    }

    return 0;
}