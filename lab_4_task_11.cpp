#include <cstdio>
#include <time.h>
#include <stdlib.h>
int main() {
    const int n = 1000;
    int a[n];
    int x;
    printf("Введите размер массива до 1000:\n");
    scanf("%d", &x);
    while ( 1000 < x || x < 1) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%d", &x);
    }
    int i, sum = 0;  
    srand(time(0));
    for (int i = 0; i < x; i++) {
        a[i] = rand() % 56 - 5;
        printf("%d\n", a[i]);  
    }
    for (int i = x-1; a[i] >= 0 && i >=0; i--) {
        sum += a[i];
    }
    printf("Сумма (for): %d\n", sum);
    sum = 0;
    i = x - 1;
    while (i >= 0 && a[i] >= 0) {
        sum += a[i];
        i--;
    }
    printf("Сумма (while): %d\n", sum);
    sum = 0;
    i = x-1;    
    if (a[i]>=0){
        do {
            sum += a[i];
            i--;
        } while (i >= 0 && a[i] >= 0);
    }
    else{
        sum = 0;
    }
    printf("Сумма (do-while): %d\n", sum);
    return 0;
}
