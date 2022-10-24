#include <stdio.h>

// ASCII에서 알파벳 소문자는 십진법으로 97(a)~122(z)
int alphabet[123] = {};
int i = 0;

int main() {
    char newString[91];
    gets(newString);

    char c = newString[i];
    while(c!='\0') {
        alphabet[c]++;
        c = newString[++i];
    }

    for(i=97; i<123; i++) {
        printf("%c:%d\n", i, alphabet[i]);
    }

    return 0;
}