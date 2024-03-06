#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int number, sum;
	
	printf("# Enter the number: ");
	scanf("%d", &number);
	
	while (number > 0) {
		int modulo = number % 10;
		sum += modulo;
		number = number / 10;
	}
	printf("# The total is: %d\n", sum);
	return 0;
}
