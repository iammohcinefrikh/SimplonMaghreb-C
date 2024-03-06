#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celsius, fahrenheit;
	int choice;
	char degreeSymbol = 248;
	
	printf("#### Celsius to Fahrenheit converter ####\n");
	printf("# Select your choice :\n# CHOOSE 1 to convert Celsius to Fahrenheit.\n# CHOOSE 2 to convert Fahrenheit to Celsius.\n");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			printf("# Enter the temperature in celsius:");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8 ) + 32;
			printf("# %.2f%cC in fahrenheit is %.2fF.\n", celsius, degreeSymbol, fahrenheit);
			break;
		case 2:
			printf("# Enter the temperature in fahrenheit:");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) / 1.8;
			printf("# %.2fF in celsius is %.2f%cC.\n",fahrenheit ,celsius, degreeSymbol);
			break;
		default:
			printf("# Please try again enter either 1 or 2.");
			break;
	}
	return 0;
}
