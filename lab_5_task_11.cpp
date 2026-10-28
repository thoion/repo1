#include <cstdio>
#include <time.h>
#include <stdlib.h>
#include <cmath>
int main() {
    const int n = 100;
    float arr[n];
    int arr2[n];
    float arr3[n];
    float arr4[n];
    int x;
    int counter = 0;
    printf("Введите размер массива до 100:\n");
    scanf("%d", &x);
    while ( 100 < x || x < 1) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%d", &x);
    }
    srand((unsigned int)time(0));
    for (int i = 0; i < x; i++) {
        arr[i] = 5.0f + static_cast<float>(rand()) / RAND_MAX * 21.0f;
        printf("%f\n", arr[i]);
        arr2[i]=floor(arr[i]);
    }
    printf("Числа после обработки: \n");
    for (int i = 0; i < x; i++){
        if (arr2[i]%2==0){
            arr3[i]=arr[i];
            printf("%f\n", arr3[i]);
            counter += 1;           
        }
    }
    printf("Числа после обработки: %d\n", counter );
    do {
        for

    }
    return 0;
}
