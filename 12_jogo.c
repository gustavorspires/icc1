#include <stdio.h>
#include <stdlib.h>

// conta o número de vizinhos X de cada casa do tabuleiro
int contViz(char **tab, int l, int c, int i, int j) {
    int cont = 0;
    int v[4][2] = {{i-1, j}, {i+1, j}, {i, j-1}, {i, j+1}};
    for (int k = 0; k < 4; ++k) {
        int x = v[k][0];
        int y = v[k][1];
        if (x >= 0 && x < l && y >= 0 && y < c && tab[x][y] == 'X') {
            cont++;
        }
    }
    return cont;
}

// Marca todas as posições onde peças podem ser colocadas
void markPos(char **tab, int l, int c) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            if (tab[i][j] == '.') {
                if (contViz(tab, l, c, i, j) % 2 == 0) {
                    tab[i][j] = '*';
                }
            }
        }
    }
}

int main() {
    int l, c;
    
    // Lê o valor de linhas e colunas
    scanf("%d %d", &l, &c);
    
    // Aloca a memória para o tabuleiro
    char **tab = (char **)malloc(l * sizeof(char *));
    for (int i = 0; i < l; ++i) {
        tab[i] = (char *)malloc((c + 1) * sizeof(char));
    }
    
    // Lê as informações do tabuleiro
    for (int i = 0; i < l; ++i) {
        scanf("%s", tab[i]);
    }
    
    // Marca as posições válidas
    markPos(tab, l, c);
    
    // Imprime o tabuleiro marcado e libera as linhas
    for (int i = 0; i < l; ++i) {
        printf("%s\n", tab[i]);
        free(tab[i]); 
    }
    free(tab); // Libera o tabuleiro
    
    return 0;
}
