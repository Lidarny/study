#include <stdio.h>

void zone_connection_counter(int a, int *good, int *work, int *low) {

    if (a > -50) {
            *(good)++;
    }
    else if (a <= -50 && a >= -70) {
            *(work)++;
    }
    else if (a < -70) {
            *(low)++;
    }
}

int average_value_per_day(int a[]) {
    int sum_whole_day = 0;
    for (int i = 0; i <= 23;i++) {
        sum_whole_day += a[i];
    }
    return sum_whole_day / 24.0;
}


int main() {

    int rssi[24] = {-42, -55, -67, -81, -88, -79, -60, -45, -39, -52,  -63, -74, -85, -90, -77, -58, -44, -41, -53, -66, -72, -80, -59, -47};

    int good = 0;
    int work = 0;
    int low = 0;
    int sr_znach = 0;

    for (int i = 0; i <= 23;i++) {
        zone_connection_counter(rssi[i], &good, &work, &low);
    }
    sr_znach = average_value_per_day(rssi);

    printf("Попало в зону Отличная связь: %d раз\n", good);
    printf("Попало в зону Рабочая связь: %d раз\n", work);
    printf("Попало в зону Слабая связь: %d раз\n", low);
    printf("Среднее значение: %d\n", sr_znach);
}
