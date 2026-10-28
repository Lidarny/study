#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
#define N 10

int rand_range(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    short iq[N*2];
    int i, k, max, max_ind;
    int E = 0;

    max = -32769;

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        iq[2*i] = rand_range(-32768, 32767);
        iq[2*i + 1] = rand_range(-32768, 32767);
        if (max < iq[2*i]) {
            max = iq[2*i + 1];
            max_ind = i;

        }
    } 
    for (int i = 0; i < N; i++ ) {
        printf("s[%d] = %.1f + j*(%.1f)\n", i, (float)iq[2*i], (float)iq[2*i + 1]);
    }
    for (k = 0; k <= (N - 1); k++) {
        E += iq[2*k]*iq[2*k] + iq[2*i + 1]*iq[2*i + 1];
    }
    printf("E = %d\n", E);
    printf("Максимальное значение: %.1f, индекс: %d\n", (float)max, max_ind);

    return 0;
}