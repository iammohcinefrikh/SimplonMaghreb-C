#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b, calculation;
	char operator;
	
	printf("# Enter A: ");
	scanf("%d", &a);
	printf("# Enter B: ");
	scanf("%d", &b);
	printf("# Enter the calculation operator: ");
	scanf(" %c", &operator);
	
	switch(operator) {
		case '+':
			calculation = a + b;
			printf("# The addition of A and B (A+B) is %d", calculation);
			break;
		case '-':
			calculation = a - b;
			printf("# The subtraction of A and B (A-B) is %d", calculation);
			break;
		case '/':
			if(b != 0) {
				calculation = a / b;
				printf("# The division of A and B (A/B) is %d", calculation);
			}
			else {
				printf("# Error");
			}
			break;
		case '*':
			calculation = a * b;
			printf("# The multiplication of A and B (A*B) is %d", calculation);
			break;
		default:
			printf("# Please enter a valid operator!");
			break;
	}
}
