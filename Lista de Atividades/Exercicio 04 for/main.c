#include <stdio.h>

int main(void) {
  int n = 0, par = 0, impar = 0;

  for(n = 999; n >= 100; n--){
		if(n % 2 == 0){
			//printf("%i + %i = ", par, n);
		  par += n;
			//printf("%i\n", par);
	  } else {
			impar += n;
		}
  }
	printf("n = %i", n);

	printf("\nSoma total dos pares: %i\n", par);
	printf("\nSoma total dos impares: %i\n", impar);

  return 0;
}