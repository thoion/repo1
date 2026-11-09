#include <cstdio>
#include <time.h>
#include <stdlib.h>
#include <cmath>

int main() {
    const int n = 100;
    float arr[n], temp;
    int x;
    int counter = 0;

    printf("Введите размер массива до 100:\n");
    scanf("%d", &x);

    while (100 < x || x < 1) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%d", &x);
    }

    srand((unsigned int)time(0));

    for (int i = 0; i < x; i++) {
        arr[i] = 5.0f + static_cast<float>(rand()) / RAND_MAX * 20.0f;
        printf("%.2f\n", arr[i]);
    }

    for (int i = 0; i < x; i++) {
        if ((int)floor(arr[i]) % 2 == 0) {
            arr[counter] = arr[i];
            counter++;
        }
    }

    for (int i = 0; i < counter - 1; i++) {
        for (int j = i + 1; j < counter; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nЧисла после обработки:\n");

    for (int i = 0; i < counter; i++) {
        printf("%.2f\n", arr[i]);
    }

    printf("\nКоличество подходящих чисел: %d\n", counter);

    return 0;
}
