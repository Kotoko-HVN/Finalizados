#include <stdio.h>

int main()
{
    float numero;

    do {
        printf("Digite um número: ");
        scanf("%f", &numero);

        if (numero > 0) {
            printf("Número positivo\n");
        } else if (numero < 0) {
            printf("Número negativo\n");
        } else {
            printf("Encerrando...\n");
            return 0;
        }

    } while (numero != 0);

    return 0;
}
