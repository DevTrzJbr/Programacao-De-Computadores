#include <stdio.h>

int main(void) {
	int numero = 0, soma = 0;

	for (numero = 9; numero <= 90; numero++)
	{
    if(numero % 5 != 0)
		{
      if(numero % 2 !=0 && numero % 3 == 0)
			{
      	printf("\nNúmero: %i", numero);
     	 soma +=numero;
     	 printf("\nSoma: %i\n", soma);
     	}
      else{
				// printf("\nFORA\nNúmero: %i", numero);
				// printf("\nSoma%i\n", soma);
      	numero++;
			}
    } 
  }
  return 0;
}