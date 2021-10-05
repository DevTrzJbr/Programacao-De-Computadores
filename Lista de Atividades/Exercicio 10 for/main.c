#include <stdio.h>

int main(void) {
	int x, i;
	int soma = 0, multiplo;

  printf("Digite um número: ");
	scanf("%i", &x);

	for (i = 0; multiplo < 6*x; i++){
		multiplo = 6 * i;
		soma += multiplo;
		printf("Número %i * 6 --> Multiplo %i\n", i, multiplo);
	}
		//printf("%i\n", i);
		printf("\nMedia: %i / %i = %i",soma, i-1, soma / (i-1));
  return 0;
}