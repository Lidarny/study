#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 52

int main() {
    char text[N];
    char text_fixed[N];
    int counter = 0;
    int i = 0;
    int j = 0; 
    int case_1 = 0;
    printf("Введите текст (максимальная длина %d): ", (N-2));
    fgets(text, sizeof(text), stdin);
    
    for (int i; text[i] != '\n'; i++) {
        if ((((isspace(text[i])) && (isspace(text[i+1]))) || 
            ((i == 0) && (isspace(text[i])))) || 
            ((isspace(text[i])) && (text[i+1] == '\n')))  {
            counter += 1;
            continue;
        }
        text_fixed[j++] = text[i]; 
    }
    text_fixed[j] = '\0';
    
    printf("Исправленный текст: %s", text_fixed);    
    printf("\nПробелов убрано: %d\n", counter);
}
