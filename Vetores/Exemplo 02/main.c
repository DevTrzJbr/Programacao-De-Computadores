/*
EXEMPLO 2: SENHAS DE 3 DIGITOS
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CLIENTES 10
#define MAX 999
#define MIN 100

int main(void) {
  int senhas[CLIENTES];
  int indice, fracas = 0, fortes = 0;

  srand(time(NULL));

  for(indice = 0; indice < CLIENTES; indice++){
    //RAND: [MIN, MAX]: [100, 999]
    senhas[indice] = rand() % (MAX - MIN - 1) + MIN;
  }
  printf("Sugestão de senhas: \n");

  for(indice = 0; indice < CLIENTES; indice++){
    //printf("Senhas %i: %i\n", indice + 1, senhas[indice]);
    if(senhas[indice] % 2 != 0 && senhas[indice] % 17 != 0){
    printf("Senha forte %i: %i\n", indice + 1, senhas[indice]);
    fortes++;
    } else {
      printf("Senha fraca %i: %i\n", indice + 1, senhas[indice]);
      fracas++;
    }
  }
  printf("\nSenhas Fracas: %i = %.1d %%\n", fracas, fracas * 100 / (fracas + fortes));
  printf("Senhas fortes: %i = %.1d %%\n", fortes, fortes * 100 / (fracas + fortes));
  
  return 0;
}