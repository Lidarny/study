#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_range(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int N = 4;
    int game = 1;
    int matrix[N][N];
    char move[2];
    int scores = 0;
    int rand_start_i_1, rand_start_j_1, rand_start_i_2, rand_start_j_2; 
    
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }
    rand_start_i_1 = rand_range(0, 3);
    rand_start_j_1 = rand_range(0, 3);
    rand_start_i_2 = rand_range(0, 3);
    rand_start_j_2 = rand_range(0, 3);

    if ((rand_start_i_1 == rand_start_i_2) && (rand_start_j_1 == rand_start_j_2)) {
        while ((rand_start_i_1 == rand_start_i_2) && (rand_start_j_1 == rand_start_j_2)) {
            rand_start_i_2 = rand_range(0, 3);
            rand_start_j_2 = rand_range(0, 3);
        }
    }
    
    matrix[rand_start_i_1][rand_start_j_1] = 2;
    matrix[rand_start_i_2][rand_start_j_2] = 2;
    
    while (game == 1) {
        printf("\n");
        for (int i = 0; i < N; i++) {        //вывод матрицы
            printf("  ");
            for (int j = 0; j < N; j++) {
                printf("%d ", matrix[i][j]);
            }
        printf("\n");
        }
        printf("\nscores: %d\n\n", scores);
        printf("Нажми w/a/s/d и Enter\nНажми ctrl+c, чтобы завершить игру\n");
        scanf(" %c", &move[0]);
        if (move[0] == 119 || move[0] == 87) {                                               //w
            for (int i = 0; i < 3; i++) {
                if (matrix[0][0] == 0 || matrix[0][0] == matrix[1][0]) {
                    matrix[0][0] += matrix[1][0];
                    matrix[1][0] = 0;
                }
                if (matrix[0][1] == 0 || matrix[0][1] == matrix[1][1]) {
                    matrix[0][1] += matrix[1][1];
                    matrix[1][1] = 0;
                }
                if (matrix[0][2] == 0 || matrix[0][2] == matrix[1][2]) {
                    matrix[0][2] += matrix[1][2];
                    matrix[1][2] = 0;
                }
                if (matrix[0][3] == 0 || matrix[0][3] == matrix[1][3]) {
                    matrix[0][3] += matrix[1][3];
                    matrix[1][3] = 0;
                }
////////////////
                if (matrix[1][0] == 0 || matrix[1][0] == matrix[2][0]) {
                    matrix[1][0] += matrix[2][0];
                    matrix[2][0] = 0;
                }
                if (matrix[1][1] == 0 || matrix[1][1] == matrix[2][1]) {
                    matrix[1][1] += matrix[2][1];
                    matrix[2][1] = 0;
                }
                if (matrix[1][2] == 0 || matrix[1][2] == matrix[2][2]) {
                    matrix[1][2] += matrix[2][2];
                    matrix[2][2] = 0;
                }
                if (matrix[1][3] == 0 || matrix[1][3] == matrix[2][3]) {
                    matrix[1][3] += matrix[2][3];
                    matrix[2][3] = 0;
                }
////////////////
                if (matrix[2][0] == 0 || matrix[2][0] == matrix[3][0]) {
                    matrix[2][0] += matrix[3][0];
                    matrix[3][0] = 0;
                }
                if (matrix[2][1] == 0 || matrix[2][1] == matrix[3][1]) {
                    matrix[2][1] += matrix[3][1];
                    matrix[3][1] = 0;
                }
                if (matrix[2][2] == 0 || matrix[2][2] == matrix[3][2]) {
                    matrix[2][2] += matrix[3][2];
                    matrix[3][2] = 0;
                }
                if (matrix[2][3] == 0 || matrix[2][3] == matrix[3][3]) {
                    matrix[2][3] += matrix[3][3];
                    matrix[3][3] = 0;
                }
            }
        }
        else if (move[0] == 97 || move[0] == 65) {                                                //a
            for (int i = 0; i < 3; i++) {
                if     (matrix[0][0] == 0 || matrix[0][0] == matrix[0][1]) {
                        matrix[0][0] += matrix[0][1];
                        matrix[0][1] = 0;
                    }
                if     (matrix[1][0] == 0 || matrix[1][0] == matrix[1][1]) {
                        matrix[1][0] += matrix[1][1];
                        matrix[1][1] = 0;
                    }
                if     (matrix[2][0] == 0 || matrix[2][0] == matrix[2][1]) {
                        matrix[2][0] += matrix[2][1];
                        matrix[2][1] = 0;
                    }
                if     (matrix[3][0] == 0 || matrix[3][0] == matrix[3][1]) {
                        matrix[3][0] += matrix[3][1];
                        matrix[3][1] = 0;
                    }
////////////////
                if     (matrix[0][1] == 0 || matrix[0][1] == matrix[0][2]) {
                        matrix[0][1] += matrix[0][2];
                        matrix[0][2] = 0;
                    }
                if     (matrix[1][1] == 0 || matrix[1][1] == matrix[1][2]) {
                        matrix[1][1] += matrix[1][2];
                        matrix[1][2] = 0;
                    }
                if     (matrix[2][1] == 0 || matrix[2][1] == matrix[2][2]) {
                        matrix[2][1] += matrix[2][2];
                        matrix[2][2] = 0;
                    }
                if     (matrix[3][1] == 0 || matrix[3][1] == matrix[3][2]) {
                        matrix[3][1] += matrix[3][2];
                        matrix[3][2] = 0;
                    }
////////////////
                if     (matrix[0][2] == 0 || matrix[0][2] == matrix[0][3]) {
                        matrix[0][2] += matrix[0][3];
                        matrix[0][3] = 0;
                    }
                if     (matrix[1][2] == 0 || matrix[1][2] == matrix[1][3]) {
                        matrix[1][2] += matrix[1][3];
                        matrix[1][3] = 0;
                    }
                if     (matrix[2][2] == 0 || matrix[2][2] == matrix[2][3]) {
                        matrix[2][2] += matrix[2][3];
                        matrix[2][3] = 0;
                    }
                if     (matrix[3][2] == 0 || matrix[3][2] == matrix[3][3]) {
                        matrix[3][2] += matrix[3][3];
                        matrix[3][3] = 0;
                    }
            }
        }
        else if (move[0] == 115 || move[0] == 83) {                                               //s
            for (int i = 0; i < 3; i++) {
                if     (matrix[3][0] == 0 || matrix[3][0] == matrix[2][0]) {
                        matrix[3][0] += matrix[2][0];
                        matrix[2][0] = 0;
                    }
                if     (matrix[3][1] == 0 || matrix[3][1] == matrix[2][1]) {
                        matrix[3][1] += matrix[2][1];
                        matrix[2][1] = 0;
                    }
                if     (matrix[3][2] == 0 || matrix[3][2] == matrix[2][2]) {
                        matrix[3][2] += matrix[2][2];
                        matrix[2][2] = 0;
                    }
                if     (matrix[3][3] == 0 || matrix[3][3] == matrix[2][3]) {
                        matrix[3][3] += matrix[2][3];
                        matrix[2][3] = 0;
                    }
////////////////
                if     (matrix[2][0] == 0 || matrix[2][0] == matrix[1][0]) {
                        matrix[2][0] += matrix[1][0];
                        matrix[1][0] = 0;
                    }
                if     (matrix[2][1] == 0 || matrix[2][1] == matrix[1][1]) {
                        matrix[2][1] += matrix[1][1];
                        matrix[1][1] = 0;
                    }
                if     (matrix[2][2] == 0 || matrix[2][2] == matrix[1][2]) {
                        matrix[2][2] += matrix[1][2];
                        matrix[1][2] = 0;
                    }
                if     (matrix[2][3] == 0 || matrix[2][3] == matrix[1][3]) {
                        matrix[2][3] += matrix[1][3];
                        matrix[1][3] = 0;
                    }
////////////////
                if     (matrix[1][0] == 0 || matrix[1][0] == matrix[0][0]) {
                        matrix[1][0] += matrix[0][0];
                        matrix[0][0] = 0;
                    }
                if     (matrix[1][1] == 0 || matrix[1][1] == matrix[0][1]) {
                        matrix[1][1] += matrix[0][1];
                        matrix[0][1] = 0;
                    }
                if     (matrix[1][2] == 0 || matrix[1][2] == matrix[0][2]) {
                        matrix[1][2] += matrix[0][2];
                        matrix[0][2] = 0;
                    }
                if     (matrix[1][3] == 0 || matrix[1][3] == matrix[0][3]) {
                        matrix[1][3] += matrix[0][3];
                        matrix[0][3] = 0;
                    }
                }
            }
        else if (move[0] == 100 || move[0] == 68) {                                               //d
            for (int i = 0; i < 3; i++) {
                if     (matrix[0][3] == 0 || matrix[0][3] == matrix[0][2]) {
                        matrix[0][3] += matrix[0][2];
                        matrix[0][2] = 0;
                    }
                if     (matrix[1][3] == 0 || matrix[1][3] == matrix[1][2]) {
                        matrix[1][3] += matrix[1][2];
                        matrix[1][2] = 0;
                    }
                if     (matrix[2][3] == 0 || matrix[2][3] == matrix[2][2]) {
                        matrix[2][3] += matrix[2][2];
                        matrix[2][2] = 0;
                    }
                if     (matrix[3][3] == 0 || matrix[3][3] == matrix[3][2]) {
                        matrix[3][3] += matrix[3][2];
                        matrix[3][2] = 0;
                    }
////////////////
                if     (matrix[0][2] == 0 || matrix[0][2] == matrix[0][1]) {
                        matrix[0][2] += matrix[0][1];
                        matrix[0][1] = 0;
                }
                if     (matrix[1][2] == 0 || matrix[1][2] == matrix[1][1]) {
                        matrix[1][2] += matrix[1][1];
                        matrix[1][1] = 0;
                }
                if     (matrix[2][2] == 0 || matrix[2][2] == matrix[2][1]) {
                        matrix[2][2] += matrix[2][1];
                        matrix[2][1] = 0;
                }
                if     (matrix[3][2] == 0 || matrix[3][2] == matrix[3][1]) {
                        matrix[3][2] += matrix[3][1];
                        matrix[3][1] = 0;
                }
////////////////
                if     (matrix[0][1] == 0 || matrix[0][1] == matrix[0][0]) {
                        matrix[0][1] += matrix[0][0];
                        matrix[0][0] = 0;
                }
                if     (matrix[1][1] == 0 || matrix[1][1] == matrix[1][0]) {
                        matrix[1][1] += matrix[1][0];
                        matrix[1][0] = 0;
                }
                if     (matrix[2][1] == 0 || matrix[2][1] == matrix[2][0]) {
                        matrix[2][1] += matrix[2][0];
                        matrix[2][0] = 0;
                }
                if     (matrix[3][1] == 0 || matrix[3][1] == matrix[3][0]) {
                        matrix[3][1] += matrix[3][0];
                        matrix[3][0] = 0;
                }
            }
        }
        else {
            printf("Неверная команда\n");
        }
    }
    printf("Игра окончена\n");
}
