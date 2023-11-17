#include <stdio.h>

int main() {
    int mtr[2][3] = {};
    int soma = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com um valor para %dx%d:\n", i, j);
            scanf("%d", &mtr[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++) {
            soma += mtr[i][j];
        }
    }
    printf("A soma dos vaores do vetor é: %d", soma);
    return 0;
}
