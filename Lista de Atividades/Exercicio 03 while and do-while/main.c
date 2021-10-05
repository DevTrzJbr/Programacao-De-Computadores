#include <stdio.h>

int main(void) {

  int Linf, Lsup, n;
  int multiplo, opcao = 1;
  int contador = 1;
  
  do {
    printf("\nMultiplos de um número qualquer\n");
    printf("Defina o número: ");
    scanf("%i", &n);

    if (n < 2) {
      printf("\nERRO: Escolha um número inteiro maior que UM:\n");
    } else {

      printf("\nDefina os limites que se encontram os multiplos:\n");
      printf("\nDefina o limite inferior: ");
      scanf("%i", &Linf);

      printf("\nDefina o limite superior: ");
      scanf("%i", &Lsup);
    

      if (Linf < 0 || Linf > Lsup) {
        printf("\nERRO: Limite inferior deve maior que zero e ser menor que Limite superior.\n");
      } else {
        // TESTE DE ALGORÍTMO
        // n = 5;  
        // Linf = 11;
        // Lsup = 39;

        printf("\n\nDos multiplos de %i temos, entre %i e %i:\n", n ,Linf, Lsup);

        while (multiplo < Lsup){
          multiplo = n * contador;

          if (multiplo >= Linf && multiplo <= Lsup){
            printf("\n%i ", multiplo);
            printf("-->  Multiplo de %i e %i\n", n, contador);
          } else {
            //  TESTE LÓGICO
            // printf("contador FORA: %i\n", contador);
            // printf("multiplo FORA: %i\n", multiplo);
          }
          contador++;
          opcao = 0;
        }
      }
    }  
  } while (opcao != 0);

  return 0;
}