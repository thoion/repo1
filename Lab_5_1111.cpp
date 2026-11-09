#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    float a[100], temp;

    srand(time(NULL));

    // Заполнение массива случайными числами
    for (int i = 0; i < 100; i++)
    {
        a[i] = 5 + (float)rand() / RAND_MAX * 20;
    }

    // Сортировка массива по убыванию
    for (int i = 0; i < 99; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Вывод элементов с четной целой частью
    printf("Элементы массива:\n");

    for (int i = 0; i < 100; i++)
    {
        if ((int)a[i] % 2 == 0)
        {
            printf("%.2f\n", a[i]);
        }
    }

    return 0;
}
