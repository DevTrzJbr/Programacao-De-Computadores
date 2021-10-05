#include <stdio.h>

int main(void) {
	int escolha = 0, clientes = 0;
	int mix1 = 0, mix2 = 0, mix3 = 0;

		printf("AVALIAÇÃO DE SUCOS MIX\n-----------------------\n");
		printf("Qual seu preferido?\n");
	do {
		printf("Mix[1], Mix[2] ou Mix[3]\n");
		printf("Para sair da avaliação digite [0]: ");
		scanf("%i", &escolha);

		switch(escolha){
			case 1: 
			printf("UM\n");
			mix1++;
			clientes++;
			break;

			case 2: 
			printf("DOIS\n");
			mix2++;
			clientes++;
			break;

			case 3: 
			printf("TRES\n");
			mix3++;
			clientes++;
			break;

			case 0: 
			printf("\n");
			break;

			default:
			printf("Erro: Digite novamente.\n\n");
		}
	} while (escolha != 0);

		printf("CLIENTES: %i\n", clientes);
		printf("VOTAÇÃO DO MIX:\n------------------\n");
		printf("MIX1: %i%%\n", mix1 * 100 /clientes);
		printf("MIX2: %i%%\n", mix2 * 100 /clientes);
		printf("MIX3: %i%%\n", mix3 * 100 /clientes);
  
  return 0;
}