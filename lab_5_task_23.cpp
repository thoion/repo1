#include <cstdio>
#include <time.h>
#include <stdlib.h>

int main() {
    const int n = 1000;
    int arr[n];
    int x;
    printf("Введите размер массива до 1000:\n");
    scanf("%d", &x);

    while (1000 < x || x < 1) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%d", &x);
    }
    srand(time(0));
    for (int i = 0; i < x; i++) {
        arr[i] =rand() % 11 - 5;
        printf("%d\n", arr[i]);
    }
    int maxLen = 1;
    int len = 1;
    for (int i = 1; i < x; i++) {
        if ((arr[i] > 0 && arr[i - 1] < 0) ||
            (arr[i] < 0 && arr[i - 1] > 0)) {
            len++;
        }
        else {
            len = 1;
        }
        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("Длина цепочки: %d", maxLen);

    return 0;
}
