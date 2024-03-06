#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputNumber, decimalToBinary, decimalNumber, i = 0;
	
	printf("# enter the binary number to convert to decimal one: ");
	scanf("%d", &inputNumber);
	
	while (inputNumber > 0) {
		int modulo = inputNumber % 10;
		decimalToBinary = modulo * pow(2, i);
		decimalNumber += decimalToBinary;
		
		inputNumber = inputNumber / 10;
		i++;
	}
	printf("%d in decimal is %d\n", inputNumber, decimalNumber);
	return 0;
}
