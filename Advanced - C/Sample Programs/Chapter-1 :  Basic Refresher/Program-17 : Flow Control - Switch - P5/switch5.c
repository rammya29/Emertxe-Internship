/*------------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 18:00:04 IST
 *   File           : C_Sample_Chapter-1_Program-17_switch.c
 *   Title          : Flow control statement - switch statements
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates switch 
 *                    statements.
 *------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
    float number;

    printf("Please enter a number: ");
    scanf("%f", &number);

    /* The switch expression should always be an integral expression */
    switch (number)
    {
        /* The labels should always evaluate to integral values */
        case 1.5:
            printf("You entered %fn", number);
            break;
        case 2.5:
            printf("You entered %fn", number);
            break;
        default:
            printf("Try again!!n");
            break;
    }

    return 0;
}
