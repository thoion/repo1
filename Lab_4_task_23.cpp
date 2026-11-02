#include <cstdio>
#include <time.h>
#include <stdlib.h>
int main() {
    unsigned long long K;
    printf("Введите целое положительное число K (1 <= K <= 1e9): \n");
    scanf("%lld", &K);
    while (K <= 1 || K > 1e9) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%lld", &K);
    }
    int K_for = K;
    int K_while = K;
    int K_do_while = K;
    int sum = 0;
    for (int i=0; K_for>0; i++){
        if (K_for%2==0){
            sum += K_for%10;
        }
        K_for /= 10;
    }
    printf("Сумма четных цифр (for): %d\n", sum);
    sum = 0;
    while (K_while>0){
        if (K_while%2==0){
                sum += K_while%10;
        }
        K_while /= 10;
    }
    printf("Сумма четных цифр (while): %d\n", sum);
    sum = 0;
    do { 
        if (K_do_while%2==0){
            sum += K_do_while%10;
        }
        K_do_while /= 10;
    } while(K_do_while>0);
    printf("Сумма четных цифр (do-while): %d", sum);
    return 0;
}
