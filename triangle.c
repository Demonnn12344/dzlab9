#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    int h;
    int i;
    long long j;
    wchar_t symbol;

    setlocale(LC_CTYPE, "");

    printf("Введите символ: ");
    if (scanf(" %lc", &symbol) != 1) {
        return 1;
    }

    printf("Введите высоту h: ");
    if (scanf("%d", &h) != 1 || h < 1) {
        printf("Высота должна быть положительным целым числом.\n");
        return 1;
    }

    for (i = 0; i < h; i++) {
        for (j = 0; j < h - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j < 2LL * i + 1LL; j++) {
            if (i == h - 1 || j == 0 || j == 2LL * i) {
                printf("%lc", (wint_t)symbol);
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
