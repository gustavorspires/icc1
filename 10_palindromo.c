#include <stdio.h>

int main(void){
    unsigned int n;
    char xd[100000];

    scanf("%u", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c", &xd[i]);
    }

    int cont[26] = {0};

    for(int i = 0; xd[i] != '\0'; i++){
        if(xd[i] >= 'a' && xd[i] <= 'z'){
            cont[xd[i] - 'a']++;
        } else if (xd[i] >= 'A' && xd[i] <= 'Z'){
            cont[xd[i]- 'A']++;
        }
        
    }

    int par = 0;

    for(int i = 0; i < 26; i++){
        if(cont[i] % 2 != 0){
            par++;
        }
    }

    if(par <= 1) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    return 0;
}