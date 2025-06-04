#include <stdio.h>

int main ()
{
	int numero1, numero2, entrada, calc;
	int total;

printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
printf("Digite a operação nescessária:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n ");
	scanf("%d", &entrada);

switch (entrada) {
	case 1: total = numero1 + numero2;
	    printf("A Soma é: %d", total);
break;
	case 2: total = numero1 - numero2;
    	printf("A Subtração é: %d", total);
break;
	case 3: total = numero1 * numero2;
	    printf("A Multiplicação é: %d", total);
break;
	case 4: total = numero1 / numero2;
    	printf("A Divisão é: %d", total);
break;

}
return 0;
}
