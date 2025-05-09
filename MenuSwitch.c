#include <stdio.h>

int main()
{
    int click, menu = 1;
    
    while (menu) {
    printf("=====MENU FUNÇÕES====\n");
    printf("=======OPÇÃO 1=======\n");
    printf("=======OPÇÃO 2=======\n");
    printf("=======OPÇÃO 3=======\n");
    printf("=======OPÇÃO 4=======\n");
    scanf("%d", &click);
    while (getchar() != '\n');
    
    
    switch (click) {
        case 1:
    printf("opcão 1: sucesso\n");
        break;
        
        case 2:
    printf("opcão 2: sucesso\n");
        break;

        case 3:
    printf("opcão 3: sucesso\n");
        break;
        
        case 4:
    printf("opcão 4: sucesso\n");
        break;
        
        default:
    printf("Opção invalida\n");
        break;
    }
}

    return 0;
}
