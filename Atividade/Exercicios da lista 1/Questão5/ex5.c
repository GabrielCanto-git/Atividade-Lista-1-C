#include <stdio.h>

int main() {
    int altura, i, j;
    char tipo;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    printf("Digite 'p' para preenchido ou 'v' para vazado: ");
    scanf(" %c", &tipo);

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= i; j++) {
            if (tipo == 'p') {
                printf("*");
            } else if (tipo == 'v') {
                if (j == 1 || j == i || i == altura)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
