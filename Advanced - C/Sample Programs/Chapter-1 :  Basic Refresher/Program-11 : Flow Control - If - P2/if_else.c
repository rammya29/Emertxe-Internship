/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 16:10:04 
 *   File           : C_Sample_Chapter-1_Program-11_if_else.c
 *   Title          : Flow control statement - if condtion
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates if 
 *                    else condition.
 *-----------------------------------------------------------------------------------------------*/
 
#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 5)
    {
        printf("number is equal to 5n");
    }
  
    else
    {
        printf("number is not equal to 5n");
    }

    return 0;
}
