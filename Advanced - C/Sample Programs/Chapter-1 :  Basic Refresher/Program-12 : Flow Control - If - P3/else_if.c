/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 16:15:04 
 *   File           : C_Sample_Chapter-1_Program-11_if_else_if.c
 *   Title          : Flow control statement - if condtion
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates if 
 *                    else if condition.
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
  
    /* Any number of else if conditional check can be done */
    else if (number > 5)
    {
        printf("number is greater than 5n");
    }
  
    /* Not manditory */
    else
    {
        printf("number is equal to 5n");
    }

    return 0;
}
