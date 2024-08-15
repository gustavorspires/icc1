// Esse código retornou 10 segmentation faults dos 12 casos testes, logo está aqui apenas por armazenamento e não deve ser utilizado como base.

#include <stdio.h>

int main(void){
    unsigned long long int n, ehPrimo = 1;
    char vet[10000000];
    scanf("%llu", &n);
    unsigned long long int q[n];

    for(int i = 0; i < n; i++){
        scanf("%llu", &q[i]);

        for(int j = 2; j <= q[i]; j++){
            if(vet[j] == 0){
                for(int k = j; k <= n; k+=j){
                    vet[k] = 1;
                }
            }
        }

    }

    for(int i = 0; i < n; i++){
        if(vet[q[i]] == 0){
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
    }

}