#include <stdio.h>



int main() {
    int N;
    int det;
    printf("Высота/ширина матрицы: ");
    scanf("%d", &N);
    
    if (N > 3 || N < 1) {
        printf("Некорректное значение\n");
        return 1;
    }

    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = i + j + 1;
        }
    }
    
    if (N == 1) {                       //определитель матрицы 1х1
        det = matrix[0][0];
    }
    if (N == 2) {                       // определитель матрицы 2х2
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    if (N == 3) {
        det = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[1][0] * matrix[2][1] * matrix[0][2] + matrix[0][1] * matrix[1][2] * matrix[2][0]) - (matrix[2][0] * matrix[1][1] * matrix[0][2] + matrix[2][1] * matrix[1][2] * matrix[0][0] + matrix[1][0] * matrix[0][1] * matrix[2][2]);
    }

    printf("Определитель: %d\nМатрица: \n", det);
    for (int i = 0; i < N; i++) {        //вывод матрицы
        for (int j = 0; j < N; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}