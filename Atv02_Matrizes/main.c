#include <stdio.h>
#include <stdlib.h>

int main() {
    int matr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com um valor:\n");
            scanf("%d", &matr[i][j]);
        }
    }
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 3; j++){
            printf("A matrix %dx%d tem valor: %d\n", i, j, (matr[i][j]*2));
        }
    }
}
