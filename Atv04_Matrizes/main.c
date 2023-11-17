#include <stdio.h>

int main() {
    int matriz[4][4];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Entre com um valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal:\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}
