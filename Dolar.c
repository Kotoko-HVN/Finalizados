#include <stdio.h>

int main()
{
    float dolar, cota, real;
    
    printf("Digite a cotação do Dolar: ");
    scanf("%f", &cota);
    printf("Digite o valor em Reais: ");
    scanf("%f", &real);
     
    dolar = (real / cota);
    
    printf("O valor em dolares é de: %.2f\n", dolar);

    return 0;
}
