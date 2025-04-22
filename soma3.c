#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, total;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    
    total = (numero1 + numero2 + numero3);
    printf("A soma total dos 3 numeros é de: %.2f\n", total);
    

   
    return 0;
}
