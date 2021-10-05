/*
EXEMPLO 1: Conceitos
-> Indexação (indice) - INT: [0, TAMANHO - 1]
-> Posição            - INT: [1, TAMANHO]
-> TAMANHO.           - INT: Estática de dados (MÁXIMA)
*/

#include <stdio.h>
#define TAMANHO 5 // Tamanho do vetor: Alunos

int main(void) {
  float bimestre1[TAMANHO];
  int indice = 0;

  while(indice < TAMANHO) {
    printf("Nota [0, 10] do Aluno %i: ", indice + 1);
    scanf("%f", &bimestre1[indice]);

    // TRATAMENTO DE ERRO: NOTA [0, 10]
    if(bimestre1[indice] >= 0 && bimestre1[indice] <= 10.0){
    indice++;
    } else {
    printf("Erro de digitação. Digite novamente.\n");
    }
  }

  //Exibir a pauta:
    printf("\nPAUTA DA TURMA: \n");
    for(indice = 0; indice < TAMANHO; indice++){
      printf("Aluno %i: %.1f\n", indice + 1, bimestre1[indice]);
    }

  return 0;
}