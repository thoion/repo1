#include <stdio.h>
int main() {
    int n;
    double r;
    printf("Введите количество точек: \n");
    scanf("%d", &n);
    printf("Введите радиус:\n");
    scanf("%lf", &r);
    int k1 = 0;
    int k2 = 0;
    for (int i = 1; i <= n; i++) {
        double x, y;
        printf("Введите координаты %d-ой точки: \n", i);
        scanf("%lf %lf", &x, &y);
        int P1 = (x * x + y * y <= r * r);
        int P2 = (x >= -r && x <= r && y >= -r && y <= r);
        if (P1) {
            k1++;
        }
        else if (!P2) {
            k2++;
        }
    }
    printf("Принадлежит обоим: %d\n", k1);
    printf("Вне: %d\n", k2);
    return 0;
}
