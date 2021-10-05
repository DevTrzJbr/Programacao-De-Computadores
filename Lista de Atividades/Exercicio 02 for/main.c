#include <stdio.h>

int range, n, soma = 0;

int main(void) {
  for (range = 100; range != 0; range--) {
    n = range * 11;
    if (n >= 300 && n <= 400){
      printf("\n%i\n", n);

      soma += n;
      printf("\nTotal: %i\n", soma);
    }
  }
  
  return 0;
}