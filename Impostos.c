#include <stdio.h>

int main() {
    float sbr, sli, slr;

    // SBR = Salario bruto
    // SLI = Salario liquido
    // SLR = Salario liquido real
    
    printf("Digite o valor do Sálario Bruto: ");
    scanf("%f", &sbr);
    
    sli = (sbr * 0.90); //previdencia social
    
    slr = (sli * 0.75); //aqui mata o imposto de renda
    
    
    printf("O salario liquido é de: %.2f\n", slr);
        
    return 0;

}
