/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 18:00:04 IST
 *   File           : C_Sample_Chapter-1_Program-10_if.c
 *   Title          : Flow control statement - if condtion
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates if 
 *                    condition.
 *-----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 5)
    {
        printf("number is less than 5n");
    }

    /* The below syntax is to valid since it has only one statement under test condtion */
    if (number > 5)
        printf("number is greater than 5n");

    /* Would would be using the below syntax if you have mutli statments under test condtion */
    if (number == 5)
    {
        printf("number is equal to 5n");
        printf("Done. So simple right!!n");
    }

    return 0;
}
