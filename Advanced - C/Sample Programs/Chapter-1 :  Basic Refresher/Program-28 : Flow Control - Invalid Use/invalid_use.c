/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Thur 22 Jul 2021 10:10:00 
 *   File           : C_Sample_Chapter-1_Program-28_invalid_break_continue.c
 *   Title          : Flow control statement - Invalid use of break & continue statement
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates how 
 *                    NOT to use break and continue statements.
 *---------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
    char option;
    int num1 = 10, num2 = 20, sum;

    printf("Enter two numbers to be addedn");
    printf("Number1: ");
    scanf("%d", &num1);
    printf("Number2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The result of the expression is %dn", sum);

    printf("Do you want to Exit? [Y - Yes]: ");
    scanf("%c", &option);

    if (option != 'Y')
    {
        /* 
         * Invalid use of break
         * Can appear only inside swtich, while, do while and for loops
         */
        break;
    }
    else
    {
        /* 
         * Invalid use of continue
         * Can appear only inside while, do while and for loops
         */
        continue;
    }

    return 0;
}
