#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fractions = 0, i, number;
   
   printf("# Entrez a number: ");
   scanf("%d", &number);
   
   for(i = 1; i <= number; i++)
   {
      if(number % i == 0)
      {
         fractions++;
      }
   }
   if(fractions == 2)
   {
      printf("# %d is a prime number.", number);
   }
   else
   {
      printf("# %d is not a prime number.", number);
   }
	return 0;
}
