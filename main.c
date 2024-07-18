#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);
    
    // Alocando memória para a matriz
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    
    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Liberando a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
