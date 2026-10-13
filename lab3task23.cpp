#include <stdio.h>
int main() {
    int n;
    printf("Введите количество углов \n");
    scanf("%d", &n);
    double xp, yp;
    printf("Введите координаты 1-ой точки \n");
    scanf("%lf %lf", &xp, &yp);
    double xn=xp, yn=yp;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        double x, y;
        printf("Введите координаты %d-ой вершины: \n", i);
        scanf("%lf %lf", &x, &y);
    }
    return 0;
}
