#include <stdio.h>            // MAIN CODE MAIN CODE //
#include <string.h>           // MAIN CODE MAIN CODE //

struct contato {
	char nome[100];
	char telefone[100];
	char email[100];
};

void MostrarContatos (struct contato lista [], int quantidade) {
	printf("\n Lista de Contatos \n");

	if (quantidade == 0) {
		printf("nenhum contato cadastrado. \n");
		return;
	}

	for (int i = 0; i < quantidade; i++) {
		printf("\nContato %d\n", i + 1);
		printf("Nome: %s\n", lista[i].nome);
		printf("Telefone: %s\n", lista[i].telefone);
		printf("E-mail: %s\n", lista[i].email);
	}
}

int main() {
	struct contato ListaDeContatos[100];
	int quantidadeatual;
	int n, i;
	int opcao, rodando = 1;

	while (rodando) {
		printf("\n--- MENU AGENDA ---\n");
		printf("1. Adicionar contato\n");
		printf("2. Remover contato\n");
		printf("3. Ver todos os contatos\n");
		printf("0. Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		while (getchar() != '\n');

		switch (opcao) {
		case 1:
			if (quantidadeatual < 100) {
				printf("Cadastro do contato %d\n", quantidadeatual + 1);

				printf("Nome: ");
				fgets(ListaDeContatos[quantidadeatual].nome, sizeof(ListaDeContatos[quantidadeatual].nome), stdin);
				ListaDeContatos[quantidadeatual].nome[strcspn(ListaDeContatos[quantidadeatual].nome, "\n")] = 0;

				printf("Telefone: ");
				fgets(ListaDeContatos[quantidadeatual].telefone, sizeof(ListaDeContatos[quantidadeatual].telefone), stdin);
				ListaDeContatos[quantidadeatual].telefone[strcspn(ListaDeContatos[quantidadeatual].telefone, "\n")] = 0;

				printf("Email: ");
				fgets(ListaDeContatos[quantidadeatual].email, sizeof(ListaDeContatos[quantidadeatual].email), stdin);
				ListaDeContatos[quantidadeatual].email[strcspn(ListaDeContatos[quantidadeatual].email, "\n")] = 0;


				quantidadeatual++;


			} else {
				printf ("Quantidade maxima de contatos atingida. \n");
			}
			break;
		
			case 2:
    if (quantidadeatual == 0) {
        printf("Nenhum contato para remover.\n");
        break;
    }

    MostrarContatos(ListaDeContatos, quantidadeatual);
    
    int indice;
    printf("Digite o número do contato que deseja remover: ");
    scanf("%d", &indice);
    while (getchar() != '\n');  // limpa o buffer
    
    if (indice < 1 || indice > quantidadeatual) {
        printf("Número inválido!\n");
        break;
    }

    // Remove o contato, deslocando os outros para cima
    for (int j = indice - 1; j < quantidadeatual - 1; j++) {
        ListaDeContatos[j] = ListaDeContatos[j + 1];
    }

    quantidadeatual--;
    printf("Contato removido com sucesso.\n");
    break;
    
		case 3:
			MostrarContatos(ListaDeContatos, quantidadeatual);
			break;
		
	case 0:
		printf("Encerrando o programa. . .\n");
		return 0;
		break;
		
	default:
            printf("Opção inválida! Sem contatos salvos.\n");
            break;
		}
	}
return 0;

} 
