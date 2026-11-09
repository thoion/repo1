#include <cstdio>
#include <time.h>
#include <stdlib.h>
#include <cmath>

int main() {
    const int n = 100;
    float arr[n];
    int arr2[n];
    float arr3[n];
    float temp;
    int x;
    int counter = 0;

    printf("Введите размер массива до 100:\n");
    scanf("%d", &x);

    while (100 < x || x < 1) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%d", &x);
    }

    srand((unsigned int)time(0));

    // Заполнение массива
    for (int i = 0; i < x; i++) {
        arr[i] = 5.0f + static_cast<float>(rand()) / RAND_MAX * 20.0f;
        printf("%f\n", arr[i]);

        arr2[i] = floor(arr[i]);
    }

    // Отбор чисел с четной целой частью
    printf("\nЧисла после обработки:\n");

    for (int i = 0; i < x; i++) {
        if (arr2[i] % 2 == 0) {
            arr3[counter] = arr[i];
            counter++;
        }
    }

    // Сортировка по убыванию
    for (int i = 0; i < counter - 1; i++) {
        for (int j = i + 1; j < counter; j++) {
            if (arr3[j] > arr3[i]) {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < counter; i++) {
        printf("%f\n", arr3[i]);
    }

    printf("\nКоличество подходящих чисел: %d\n", counter);

    return 0;
}
