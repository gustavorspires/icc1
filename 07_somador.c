#include <stdio.h>

int main() {
    int bit1, bit2, x = 0, y = 0, n, m;
    
    scanf("%d %d", &n, &m);
    
    for(int i = 1; i <= n; i++){
        scanf("%d", &bit1);
        x = x * 2 + bit1;
    }
    for(int i = 1; i <= m; i++){
        scanf("%d", &bit2);
        y = y * 2 + bit2;
    }
    
    printf("%d\n", x+y);
    return 0;
}
