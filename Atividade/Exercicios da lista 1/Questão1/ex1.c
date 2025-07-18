#include <stdio.h>

#define MAX 50 

int main() {
    int pascal[MAX][MAX];
    int altura;
    int i, j;

    
    do {
        printf("Digite a altura do triângulo de Pascal (entre 1 e %d): ", MAX);
        scanf("%d", &altura);
    } while (altura < 1 || altura > MAX);

  
    for (i = 0; i < altura; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

   
    for (i = 0; i < altura; i++) {
        for (j = 0; j < altura - i - 1; j++) {
            printf("   "); 
        }
        for (j = 0; j <= i; j++) {
            printf("%3d   ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
