#include <stdio.h>


int main(void) {
	float HABITANTES = 11;
	int pessoas = 0, empregado = 0, desempregado = 0;
	int valor;

	while (HABITANTES > pessoas){
		printf("Digite [1] para empregado, digite [2] para desempregado: ");
		scanf("%i", &valor);

		switch ( valor )
  	{
			case 1 :
			empregado++;
			pessoas++;
			break;
			
			case 2 :
			desempregado++;
			pessoas++;
			break;
	
			default:
			printf("\nErro: Digite novamente\n");
		}
	}	

  printf("\nEmpregado: %i (%.1f%%)\n", empregado, empregado * 100 / HABITANTES);
  printf("Desempregado: %i (%.1f%%)\n", desempregado, desempregado * 100 / HABITANTES);
  return 0;
}