#include <cstdio>
#include <time.h>
#include <stdlib.h>
int main() {
    int a[1000];
    int i, sum = 0;  
    srand(time(NULL));
    for (i = 0; i < 1000; i++) {
        a[i] = rand() % 56 - 5;  
    }
    for (i = 999; a[i] >= 0; i--) {
        printf("%d\n", a[i]);
        sum += a[i];
    }
    printf("Сумма (for) элементов с конца до первого отрицательного: %d\n", sum);
    sum = 0;
    i = 999;
    while (i >= 0 && a[i] >= 0) {
        sum += a[i];
        i--;
    }
    printf("Сумма (while): %d\n", sum);
    sum = 0;
    i = 999;
    do {
        sum += a[i];
        i--;
    } while (i >= 0 && a[i]>=0);
    printf("Сумма (do-while): %d\n", sum);
    return 0;
}
