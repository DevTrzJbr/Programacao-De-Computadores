/*
RELATÓRIO:
LETRA A: Quantidade Absoluta + Relativos (%)

*/
#include <stdio.h>
#define TAMANHO 6

int main(void) {
  float semestral[TAMANHO];
  int i = 0;
  int A = 0, PF = 0, R = 0;

  while (i < TAMANHO) {
    printf("Nota [0, 10] do aluno %i: ", i + 1);
    scanf("%f", &semestral[i]);

    if (semestral[i] < 0 || semestral[1] > 10)
      printf("\nERRO: Digitação. Escolha de novo.\n");
    else {
      if(semestral[i] >= 7.0)                 // APROVADOS
        A++;
      else if (semestral[1] >= 3.0)           // PROVA FINAL
        PF++;
      else
        R++;
      i++;                                    // ITERAÇÃO
    }
  }
  printf("RELATÓRIO:\n");
  printf("APROVADOS: %i = %.1f %%\n", A, A * 100.0 / TAMANHO);
  printf("PROVA FINAL: %i = %.1f %%\n", PF, PF * 100.0 / TAMANHO);
  printf("REPROVADOS: %i = %.1f %%\n", R, R * 100.0 / TAMANHO);
  return 0;
}