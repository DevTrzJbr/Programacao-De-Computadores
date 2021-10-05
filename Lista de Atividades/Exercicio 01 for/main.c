#include <stdio.h>

int n, mult3, range;

int main(void) {
  for (range = 1; n < 99; ++range){
    n = range * 3;
    printf("%i\n", n);
  }
  
  return 0;
}