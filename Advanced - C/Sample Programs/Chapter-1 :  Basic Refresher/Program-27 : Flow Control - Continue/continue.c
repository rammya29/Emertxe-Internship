/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Thur 22 Jul 2021 09:50:00 
 *   File           : C_Sample_Chapter-1_Program-27_continue.c
 *   Title          : Flow control statement - continue statement
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions.This program demonstrates 
 *                    continue statement
 *----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
    int i, number;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
        if (i != number)
        {

            /* 
             * Continues the multi itretive loops (for, while and do while) 
             * under which it is stated 
             */
            continue;
        }
        printf("Number matchedn");
    }

    return 0;
}
