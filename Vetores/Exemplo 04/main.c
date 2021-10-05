/*
RELATÓRIO:
LETRA B: Quantidade Absolutos + Relativos (%)
de alunos acima (e inclusive) + abaixo +
da média da turma toda.

*/
#include <stdio.h>
#define TAMANHO 6

int main(void) {
  float semestral[TAMANHO];
  int i = 0;
  int A = 0, PF = 0, R = 0, soma = 0, acima = 0, abaixo = 0;
  float media;

  while (i < TAMANHO) {
    printf("Nota [0, 10] do aluno %i: ", i + 1);
    scanf("%f", &semestral[i]);

    if (semestral[i] < 0 || semestral[1] > 10)
      printf("\nERRO: Digitação. Escolha de novo.\n");
    else {
      if(semestral[i] >= 7.0)                 // APROVADOS
        A++;
      else
        PF++;
      i++;                                    // ITERAÇÃO
    }
  }
  i = 0;
  while(i<TAMANHO){
    soma += semestral[i];
    i++;
  }
  media = soma/TAMANHO;
  i=0;

  while(i<TAMANHO){
    if(semestral[i]>=media){
      acima++;
    }
    else{
      abaixo++;
    }
    i++;
  }
  printf("MÉDIA DA TURMA: %.2f\n", media);
  printf("\nRELATÓRIO:\n");

  printf("Aprovados: %i = %.1f%%\n", A, A*100.0/(A+PF+R));
  printf("Prova Final: %i = %.1f%%\n", PF, PF*100.0/(A+PF+R));

  printf("\nALUNOS ACIMA DA MÉDIA DA TURMA: %i = %.1f%%\n", acima, acima * 100.0 / (A+PF+R));
  printf("ALUNOS ABAIXO DA MÉDIA DA TURMA: %i = %.1f%%\n", abaixo, abaixo * 100.0 / (A+PF+R));
  return 0;
}