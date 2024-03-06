#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{

    int number,sum = 0;

    printf("# Enter the number you wish to sum: ");
    scanf("%d", &number);

    while (number > 0)
    {
        int modulo = number % 10;

        int j;
        int numberOfDivision = 0;

        for(j=1; j < modulo; j++)
        {
            if(modulo % j == 0)
            {

                numberOfDivision +=1;

            }
        }


        if(numberOfDivision == 1 )
        {


            sum += modulo;

        }

        number = number / 10;
    }
    printf("sum : %d\n",sum);

    return 0;

}
