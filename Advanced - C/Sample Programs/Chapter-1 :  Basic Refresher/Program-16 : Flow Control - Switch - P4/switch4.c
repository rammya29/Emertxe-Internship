/*------------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 17:00:00 
 *   File           : C_Sample_Chapter-1_Program-16_switch.c
 *   Title          : Flow control statement - switch statements
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates switch 
 *                    statements.
 *------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    switch (number)
    {
        /* The labels should not contain a variable (i.e a run time expression) */
        case number + 1:
            printf("You entered %fn", number);
            break;
        case number + 2:
            printf("You entered %fn", number);
            break;
        default:
            printf("Try again!!n");
            break;
    }

    return 0;
}
