#include <stdio.h>

int main() {
    int largura;
    int i, j, espacos;

    
    do {
        printf("Digite a largura central do losango (ímpar): ");
        scanf("%d", &largura);
    } while (largura < 1 || largura % 2 == 0);

   
    for (i = 1; i <= largura; i += 2) {
        espacos = (largura - i) / 2;
        for (j = 0; j < espacos; j++) printf(" ");
        for (j = 0; j < i; j++) printf("x");
        printf("\n");
    }

    
    for (i = largura - 2; i >= 1; i -= 2) {
        espacos = (largura - i) / 2;
        for (j = 0; j < espacos; j++) printf(" ");
        for (j = 0; j < i; j++) printf("x");
        printf("\n");
    }

    return 0;
}
