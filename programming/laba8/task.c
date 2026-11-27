#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

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
    int rand_i, rand_j;
    int cnt = 0;
    int cnt_ok = 0;
    
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
        int before[N][N];
        bool has_empty = false;
        bool can_move = false;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (matrix[i][j] == 0) {
                    has_empty = true;
                }
                if (i + 1 < 4 && matrix[i][j] == matrix[i+1][j]) {
                    can_move = true; 
                }
                if (j + 1 < 4 && matrix[i][j] == matrix[i][j+1]) {
                    can_move = true;
                }
                before[i][j] = matrix[i][j];
            }
        }

        if (has_empty == false && can_move == false) {
            game = 0;
        }

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

        rand_i = rand_range(0, 3);
        rand_j = rand_range(0, 3);

        cnt_ok = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (matrix[i][j] == before[i][j]) {
                    cnt_ok += 1;
                }
            }
        }
        if (cnt_ok != 16) {
            do {
                rand_i = rand_range(0, 3);
                rand_j = rand_range(0, 3);
            } while (matrix[rand_i][rand_j] != 0);
        
        matrix[rand_i][rand_j] = 2;
        }
    }
    printf("Игра окончена\n");
}
