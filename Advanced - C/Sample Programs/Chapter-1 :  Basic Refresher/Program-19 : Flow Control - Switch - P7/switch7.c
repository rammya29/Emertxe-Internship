/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Mar 2021 18:40:00 
 *   File           : C_Sample_Chapter-1_Program-19_switch.c
 *   Title          : Flow control statement - switch statements
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates switch 
 *                    statements.
 *----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    switch (number)
    {
        /* The default lable can be put anywhere in the body */
        default:
            printf("Try again!!n");
            /* Make sure you have a break here, else it will lead to fall through */
            break;
        case 10 + 1:
            printf("You entered %fn", number);
            break;
        case 11:
            printf("You entered %fn", number);
            break;
    }

    return 0;
}
