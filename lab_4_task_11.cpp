int main() {
    int a[1000];
    int i, sum = 0;
    int i, sum = 0;    
    srand(time(NULL));
    for (i = 0; i < 1000; i++) {
        a[i] = rand() % 56 - 5;  // от -5 до 50
        a[i] = rand() % 56 - 5;
    }
        }
    for (i = 999; a[i] >= 0; i--) {
        printf("%d\n", a[i]);
        sum += a[i];
    }
    printf("Сумма элементов с конца до первого отрицательного: %d\n", sum); 
    printf("Сумма элементов с конца до первого отрицательного: %d\n", sum);    
    return 0;
}
