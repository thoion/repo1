
#include <stdio.h>

int main() {
    const int N = 3;
    const int M = 4;

    int a[N][M];
    int min;
    long long p = 1;

    printf("Введите элементы массива:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i += 2) {
        min = a[i][0];

        for (int j = 1; j < M; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }

        printf("Минимум в строке %d = %d\n", i + 1, min);
        p *= min;
    }

    printf("Произведение = %lld\n", p);

    return 0;
}
