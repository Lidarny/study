#include <stdio.h>



int main() {
    int B1;
    int B2;
    int B3;

    int det;
    int det_x;
    int det_y;
    int det_z;

    int N = 3;

    int matrix[N][N];

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 0;


    B1 = 5;
    B2 = 8;
    B3 = 2;

    det = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[1][0] * matrix[2][1] * matrix[0][2] + matrix[0][1] * matrix[1][2] * matrix[2][0]) - (matrix[2][0] * matrix[1][1] * matrix[0][2] + matrix[2][1] * matrix[1][2] * matrix[0][0] + matrix[1][0] * matrix[0][1] * matrix[2][2]);
    det_x = (B1 * matrix[1][1] * matrix[2][2] + B1 * matrix[2][1] * matrix[0][2] + matrix[0][1] * matrix[1][2] * B3) - (B2 * matrix[1][1] * matrix[0][2] + matrix[2][1] * matrix[1][2] * B1 + B2 * matrix[0][1] * matrix[2][2]);
    det_y = (matrix[0][0] * B2 * matrix[2][2] + matrix[1][0] * B3 * matrix[0][2] + B1 * matrix[1][2] * matrix[2][0]) - (matrix[2][0] * B2 * matrix[0][2] + B3 * matrix[1][2] * matrix[0][0] + matrix[1][0] * B1 * matrix[2][2]);
    det_z = (matrix[0][0] * matrix[1][1] * B3 + matrix[1][0] * matrix[2][1] * B1 + matrix[0][1] * B2 * matrix[2][0]) - (matrix[2][0] * matrix[1][1] * B1 + matrix[2][1] * B2 * matrix[0][0] + matrix[1][0] * matrix[0][1] * B3);
    printf("x = %d\ny = %d\nz = %d\n", (det_x / det), (det_y / det), (det_z) / det);

    return 0;
}