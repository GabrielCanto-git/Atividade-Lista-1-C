#include <stdio.h>

int main() {
    int altura, i, j;
    char tipo;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("Digite 'p' para preenchido ou 'v' para vazado: ");
    scanf(" %c", &tipo);

    for (i = 0; i < altura; i++) {
        for (j = 0; j < altura; j++) {
            if (tipo == 'p') {
                printf("*");
            } else if (tipo == 'v') {
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
