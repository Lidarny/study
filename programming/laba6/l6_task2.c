#include <stdio.h>

int main() {
    float B1;
    float B2;
    float B3;

    int N;

    float det;
    float det_x;
    float det_y;
    float det_z;

    printf("Размер матрицы (2 или 3): ");
    scanf("%d", &N);

    int matrix[N][N];

    if (N == 2) {
        
        printf("matrix[0][0]: ");
        scanf("%d", &matrix[0][0]);
        printf("matrix[0][1]: ");
        scanf("%d", &matrix[0][1]);
        printf("matrix[1][0]: ");
        scanf("%d", &matrix[1][0]);
        printf("matrix[1][1]: ");
        scanf("%d", &matrix[1][1]);

        printf("B1: ");
        scanf("%f", &B1);
        printf("B2: ");
        scanf("%f", &B2);

        det = ((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]));
        det_x = ((B1 * matrix[1][1]) - (B2 * matrix[0][1]));
        det_y = ((matrix[0][0] * B2) - (matrix[1][0] * B1));
        printf("\nx: %.1f\ny: %.1f\n", (det_x/det), (det_y/det));
    }

    if (N == 3) {
        printf("matrix[0][0]: ");
        scanf("%d", &matrix[0][0]);
        printf("matrix[0][1]: ");
        scanf("%d", &matrix[0][1]);
        printf("matrix[0][2]: ");
        scanf("%d", &matrix[0][2]);
        printf("matrix[1][0]: ");
        scanf("%d", &matrix[1][0]);
        printf("matrix[1][1]: ");
        scanf("%d", &matrix[1][1]);
        printf("matrix[1][2]: ");
        scanf("%d", &matrix[1][2]);
        printf("matrix[2][0]: ");
        scanf("%d", &matrix[2][0]);
        printf("matrix[2][1]: ");
        scanf("%d", &matrix[2][1]);
        printf("matrix[2][2]: ");
        scanf("%d", &matrix[2][2]);

        printf("B1: ");
        scanf("%f", &B1);
        printf("B2: ");
        scanf("%f", &B2);
        printf("B3: ");
        scanf("%f", &B3);

        det = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[1][0] * matrix[2][1] * matrix[0][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] - 
              (matrix[2][0] * matrix[1][1] * matrix[0][2] + matrix[0][1] * matrix[1][0] * matrix[2][2] + matrix[0][0] * matrix[2][1] * matrix[1][2]));

        det_x = (B1 * matrix[1][1] * matrix[2][2] + B2 * matrix[2][1] * matrix[0][2] + matrix[0][1] * matrix[1][2] * B3 - 
                (B3 * matrix[1][1] * matrix[0][2] + matrix[0][1] * B2 * matrix[2][2] + B1 * matrix[2][1] * matrix[1][2]));

        det_y = (matrix[0][0] * B2 * matrix[2][2] + matrix[1][0] * B3 * matrix[0][2] + B1 * matrix[1][2] * matrix[2][0] - 
                (matrix[2][0] * B2 * matrix[0][2] + B1 * matrix[1][0] * matrix[2][2] + matrix[0][0] * B3 * matrix[1][2]));

        det_z = (matrix[0][0] * matrix[1][1] * B3 + matrix[1][0] * matrix[2][1] * B1 + matrix[0][1] * B2 * matrix[2][0] - 
                (matrix[2][0] * matrix[1][1] * B1 + matrix[0][1] * matrix[1][0] * B3 + matrix[0][0] * matrix[2][1] * B2));
        
        if (det == 0) {
            printf("Нет единственного решения\n");
        }
        else {
            printf("\nx: %.1f\ny: %.1f\nz: %.1f\n", (det_x/det), (det_y/det), (det_z/det));
        }
    }
    return 0;
}