#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxLen = 1;
    int len = 1;

    for (int i = 1; i < n; i++) {
        if ((a[i] > 0 && a[i - 1] < 0) ||
            (a[i] < 0 && a[i - 1] > 0)) {
            len++;
        }
        else {
            len = 1;
        }

        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}
