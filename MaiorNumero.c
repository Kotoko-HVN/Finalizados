#include <stdio.h>

int main() {
    float numero1, numero2, numero3, numero4;

    // Input
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    printf("Digite o quarto numero: ");
    scanf("%f", &numero4);

    // Find the largest number
    if (numero1 >= numero2 && numero1 >= numero3 && numero1 >= numero4) {
        printf("O maior numero é: %.f\n", numero1);
    } else if (numero2 >= numero1 && numero2 >= numero3 && numero2 >= numero4) {
        printf("O maior numero é: %.f\n", numero2);
    } else if (numero3 >= numero1 && numero3 >= numero2 && numero3 >= numero4) {
        printf("O maior numero é: %.f\n", numero3);
    } else {
        printf("O maior numero é: %.f\n", numero4);
    }

    return 0;
}
