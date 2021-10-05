#include <stdio.h>
#define SM 880.05

int main(void) {
	float salario = 0, qntSM = 0;
	int cliente = 10, pessoa = 0;
	int A = 0,B = 0,C = 0;

	

	while (cliente > pessoa){
		printf("\nQual seu salário? R$");
		scanf("%f", &salario);

		//printf("R$%.2f\n", salario);

		printf("Quantidade de salários mínimos: %.1f\n", qntSM = salario / SM);

		if (qntSM > 15){
			printf("Grupo A\n");
			A++;
		} else if (qntSM > 5) {
			printf("Grupo B\n");			
			B++;
		} else {
			printf("Grupo C\n");
			C++;
		}
		pessoa++;
	}

	printf("\nGRUPO A (Acima de 15 salários mínimos)--> Quantidade %i (%i%%)\n",A, A * 100 / cliente);
	printf("GRUPO B (Entre 15 e 5 salários mínimos)--> Quantidade %i (%i%%)\n",B, B * 100 / cliente);
	printf("GRUPO C (Abaixo de 5 salários mínimos)--> Quantidade %i (%i%%)\n",C, C * 100 / cliente);

  return 0;
}