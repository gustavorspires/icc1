#include <stdio.h>

int main(void) {
    unsigned long long int n, m, x = 0, y = 0, r = 0;
    int vetn[100], vetm[100];

    scanf("%llu %llu", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d", (vetn+i));
    }
    for (int i = 0; i < m; i++){
        scanf("%d", (vetm+i));
    }

    int *pn = vetn, *pm = vetm;

    for (int i = 0; i < n; i++){
        x = (x << 1) + *(pn++);
    }

    for (int i = 0; i < m; i++){
        y = (y << 1) + *(pm++);
    }

    r = x + y;

    printf("%llu", r);
}