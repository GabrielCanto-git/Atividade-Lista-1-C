#include <stdio.h>

int main() {
    int B, L, A;
    int i, j, espacos;

    do {
        printf("Digite o número de asteriscos da base (ímpar, >= 3): ");
        scanf("%d", &B);
    } while (B < 3 || B % 2 == 0);

    do {
        printf("Digite a largura do tronco (ímpar, >= 1, <= B/2): ");
        scanf("%d", &L);
    } while (L < 1 || L % 2 == 0 || L > B / 2);

    do {
        printf("Digite a altura do tronco (>= 2, <= B/2): ");
        scanf("%d", &A);
    } while (A < 2 || A > B / 2);

    
    for (i = 1; i <= B; i += 2) {
        espacos = (B - i) / 2;
        for (j = 0; j < espacos; j++) printf(" ");
        for (j = 0; j < i; j++) printf("*");
        printf("\n");
    }

    espacos = (B - L) / 2;
    for (i = 0; i < A; i++) {
        for (j = 0; j < espacos; j++) printf(" ");
        for (j = 0; j < L; j++) printf("*");
        printf("\n");
    }

    return 0;
}

