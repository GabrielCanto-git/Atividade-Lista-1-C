#include <stdio.h>

int main() {
    int N;
    int i, j;

    do {
        printf("Digite o valor de N (>= 2): ");
        scanf("%d", &N);
    } while (N < 2);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
