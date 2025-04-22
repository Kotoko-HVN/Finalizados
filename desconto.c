#include <stdio.h>

int main()
{
    float preço, preçofinal;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &preço);
    
    preçofinal = (preço * .9);
    printf("O preço final do produto é de R$%.2f", preçofinal);
    
    
    return 0;
}
