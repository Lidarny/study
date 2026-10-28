#include <stdio.h>

void zoner(int a[], int *good, int *ok, int *bad) {
    *good = 0;
    *ok = 0;
    *bad = 0;
    for (int i = 0; i < 24; i++) {
        if (a[i] > -50) {
            (*good)++;
        }
        else if ((a[i] <= -50) && (a[i] >= -70)) {
            (*ok)++;
        }
        else {
        (*bad)++;
        }
    }
}

float avg_value(int value[]) {
    int sum = 0;
    for (int i = 0; i < 24; i++) {
        sum += value[i];
    }
    return sum / 24.0;
}
// {-42, -54, -67, -81, -88, -79, -60, -45, -39, -52,  -63, -74, -85, -90, -77, -58, -44, -41, -53, -66, -72, -80, -59, -47}
void max_len_bad(int value[], int *max_len, int *start, int *end) {
    int len = 0;
    (*max_len) = 0;

    for (int i = 0; i < 23; i++) {
        if (value[i] < -70 && value[i+1] < -70) {
            len += 1;
            if ((*max_len) < len) {
                (*max_len) = len;
            }
        }
        else {
            len = 0;
        }
    }
    for (int i = 0; i < 23; i++) {
        if ((value[i] < -70) && (value[i+(*max_len)] < -70)) {
            (*start) = i;
            (*end) = ((i)+((*max_len)));
        }
    }
    if (((*max_len)) > 0) {
        (*max_len)++;
    }
}

int main() {
    int good_zone, ok_zone, bad_zone, max_len, start, end;
    float average_value;

    int rssi[24] = {-42, -54, -67, -81, -88, -79, -60, -45, -39, -52,  -63, -74, -85, -90, -77, -58, -44, -41, -53, -66, -72, -80, -59, -47};
    
    zoner(rssi, &good_zone, &ok_zone, &bad_zone);

    average_value = avg_value(rssi);

    max_len_bad(rssi, &max_len, &start, &end);

    printf("Попала в зону <Отличная связь> %d раз\nПопало в зону <Рабочая связь> %d раз\nПопало в зону <Плохая связь> %d раз\n", good_zone, ok_zone, bad_zone);
    printf("Средний уровень за сутки: %.2f dBm\n", average_value);
    printf("Длина самого длинного провала: %d\nНачало провала: %d\nКонец провала: %d\n", max_len, start, end);
    return 0;
}
