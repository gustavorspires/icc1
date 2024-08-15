#include <stdio.h>

int main()
{
    int n, count = 0, divisor = 5; 
    scanf("%d", &n);

    while (n / divisor > 0) {
        count += n / divisor;
        divisor *= 5;
    }

    printf("%d\n", count);
    return 0;
}
