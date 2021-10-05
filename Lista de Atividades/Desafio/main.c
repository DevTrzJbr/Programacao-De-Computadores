#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

  int Tentativas, segredo, numero, opcao;
  

  // segredo = 7;

    srand (time(NULL));
    do {
    	Tentativas = 0;
      printf("\nMENU DO JOGO: \n");
      printf("Escolha: 1 (Jogar) ou 0 (Sair): ");
      printf("Sua opção: ");
      scanf("%i", &opcao);

      if (opcao == 0)
        printf("FIM DO JOGO. \n");
      else if (opcao != 1)
        printf("Erro de opção. Escolha de novo.\n");
      else{

        segredo = rand() % 100 + 1;
        //printf("Segredo: %i\n", segredo);

        while (Tentativas < 7 && opcao != 0){
          printf("\nTentativas (%i)\n", 7 - Tentativas);
          printf("Descubra o segredo da porta: ");
          scanf("%i",&numero);

          if (numero != segredo) {
            if (numero > segredo) {
              printf("Segredo menor que %i\n", numero);
            } else {
              printf("Segredo maior que %i\n", numero);
            }

          } else {
            printf("----------------------------");
            printf("\nPARABÊNS VOCÊ ACERTOU!\n");
            printf("----------------------------");
            opcao = 0;
          }

          Tentativas++;
        }

				if (numero == segredo) {
					printf("\n\nVocê acertou com um total de %i tentivas.\n", Tentativas);
				} else {
					printf("\nSuas tentativas acabaram, TENTE NOVAMENTE!\n");
				}
      }
    } while (opcao != 0);

    

  return 0;
}