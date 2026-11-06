#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 50

int main() {
    char text[N];
    printf("Введите имя: ");
    fgets(text, sizeof(text), stdin);
    printf("%s", text);
    for (int i = 0; i < N;i++) {
        if ((isscpace(text[i])) && (isspace(text[i+1]))) {
            text[i+1] == 0;
        }
    }
    printf("%s\n", text);
}
