#include <stdio.h>

int main(void) {
  int n;
	int soma = 0;

	do{
		printf("Digite um Número entre [10 e 90]: ");
		scanf("%i", &n);

		if(n != 0) {
			if (n < 10 || n > 90 ) {
			printf("--------------------------------------\nERRO: O número deve ser entre 10 e 90.\n--------------------------------------\n");
			} else {
				soma += n;
				if (n % 5 == 2) {
					printf("%i / 5 resto 2 \n", n);
				}
				printf("Soma de todos os números: %i\n", soma);
			}
		} else {
			printf("Até outro dia. ( ͡° ͜ʖ ͡°)");
		}
	} while (n != 0);
	return 0;
}