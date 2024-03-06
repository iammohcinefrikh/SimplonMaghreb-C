#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int inputYear;
	
	printf("# Enter a year: ");
	scanf("%d", &inputYear);
	
	// check if inputYear is divisible by 4, 
	if(inputYear % 4 == 0) {
		if(inputYear % 100 == 0) {
			// check if inputYear is divisible by 4, 100 and 400, it is a leap year.
			if(inputYear % 400 == 0) {
				printf("# %d is a leap year.\n", inputYear);
			}
			// if inputYear is divisible by 4, 100 and not 400, it is not a leap year.
			else {
				printf("# %d is not a leap year\n", inputYear);
			}
		}
		// if inputYear is divisible by 4 and not by 100, it is a leap year. 
		else {
			printf("# %d is a leap year\n", inputYear);
		}
	}
	// if inputYear is not divisible by 4, it's not a leap year.
	else {
		printf("# %d is not a leap year\n", inputYear);
	}
}
