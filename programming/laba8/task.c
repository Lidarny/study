#include <stdio.h>

int main() {
    int N = 4;
    int game = 1;
    int matrix[N][N];
    char move[2];
    int scores = 0;

    char forward[4] = "w";
    char left[4] = "a";
    char backward[4] = "s";
    char right[4] = "d";
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }
    
    while (game == 1) {
        for (int i = 0; i < N; i++) {        //вывод матрицы
            printf("  ");
            for (int j = 0; j < N; j++) {
                printf("%d ", matrix[i][j]);
            }
        printf("\n");
        }
        printf("\nscores: %d\n\n", scores);
        // printf("Нажми стрелку и Enter \n");
        scanf("%c", &move[0]);
        if (move[0] == 119) {
            printf("forward\n");
        }
        if (move[0] == 97) {
            printf("left\n");
        }
        if (move[0] == 115) {
            printf("backward\n");
        }
        if (move[0] == 100) {
            printf("left\n");
        }
    }
}
