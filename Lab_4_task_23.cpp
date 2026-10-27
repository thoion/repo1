#include <cstdio>
#include <time.h>
#include <stdlib.h>
int main() {
    unsigned long long K;
    printf("Введите целое положительное число K (K <= 1e9): \n");
    scanf("%lld", &K);
    while (K <= 0 || K > 1e9) {
        printf("Неверно введено число, повторите попытку: ");
        scanf("%lld", &K);
    }
    int K1 = K;
    int kch;
    for (kch=0;K1>0;kch++){
        K1 /= 10;
    }
    int sum = 0;
    int K2=K;
    for (int i=0; kch>0; i++){
        if (K2%2==0){
            sum += K2%10;
        }
        K2 /= 10;
        kch = kch - 1;
    }
    printf("Сумма четных цифр (for): %d\n", sum);
    sum = 0;
    int K3 = K;
    while (K3>0){
        if (K3%2==0){
                sum += K3%10;
        }
        K3 /= 10;
    }
    printf("Сумма четных цифр (while): %d\n", sum);
    int K4 = K;
    sum = 0;
    if (K%2==0){
        do { 
            if (K4%2==0){
                sum += K4%10;
            }
            K4 /= 10;
        } while(K4>0);
    }
    printf("Сумма четных цифр (do-while): %d", sum);
    return 0;
}
