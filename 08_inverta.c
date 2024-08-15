#include <stdio.h>

int main(void){
    int n, a[100000], *p = a;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", p);
        p++;
    }
    
    p = a+(n-1);
    
    for(int i = 0; i < n; i++){
        printf("%d ", *p);
        p--;
    }
    return 0;
}
