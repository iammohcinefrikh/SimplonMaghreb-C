#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNum,i= 0 ;

    printf("Enter your decimal number:");

    scanf("%d", &inputNum);
    int buinaryNumS;
    char buinaryNumD[50] = {};
    char buinaryNum[50];

    while(inputNum != 0){

        buinaryNumS = inputNum%2;

        sprintf(buinaryNum, "%d %s", buinaryNumS ,buinaryNumD );
        strcpy(buinaryNumD, buinaryNum);
        inputNum = inputNum / 2;

         if (inputNum < 0) {
            break;
        }
    }
    printf("%s", buinaryNum);


    return 0;
}
