#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fractions = 0, i, number, sum;
   
	printf("# Entrez a number: ");
	scanf("%d", &number);
   
	while (number > 0) {
		int modulo = number % 10;

		for(i = 1; i <= modulo; i++){
			if(modulo % i == 0){
			printf("fraction!\n");
			fractions++;
			}
		}
		if(fractions == 2){
			printf("# %d is a prime number.\n", modulo);
		}
		else{
			printf("# %d is not a prime number.\n", modulo);
		}
		number = number / 10;
   }
	return 0;
}
