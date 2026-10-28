#include <stdio.h>

int main() {

    int a[12] = {1337, 67, 6, 81, 32, 69, 407, 99, 1, 35, 72, 100};
    int sum = 0;
    int i = 0;
    float sr_zn = 0;
    int max = 0;
    int min = 1000000;

    while (i < 12) {
        printf("%d\n", a[i]);
        sum += a[i];
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
        i += 1;
    }
    sr_zn = (sum / (float)i);
    printf("Сумма: %d\n", sum);
    printf("Среднее значение: %.2f\n", sr_zn);
    printf("Макс. значение: %d\n", max);
    printf("Мин. значение: %d\n", min);
}