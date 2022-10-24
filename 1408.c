#include <stdio.h>

char password[20] = {};
char encoded[20] = {};
char c;
int i = 0;

int main() {
    gets(password);

    c = password[i];
    while(c!='\0') {
        encoded[i] = c+2;
        printf("%c", encoded[i++]);
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