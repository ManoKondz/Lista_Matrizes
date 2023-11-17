#include <stdio.h>

int main() {
    int matriz[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Entre com um valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos, exceto os da diagonal principal:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
