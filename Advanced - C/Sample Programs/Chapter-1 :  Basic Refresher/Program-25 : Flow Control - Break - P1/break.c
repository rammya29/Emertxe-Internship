/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K 
 *   Date           : Tue 20 Jul 2021 20:40:04 IST
 *   File           : C_Sample_Chapter-1_Program-25_break.c
 *   Title          : Flow control statement - break statement
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates 
 *                    break statement.
 *----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
    int i, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
        if (i == number)
        {
            printf("Number matchedn");

            /* 
             * Breaks the multi itretive loops (for, while and do while) 
             * under which it is stated 
             * One exception is the swtich statement
             */
            break;
        }
    }

    if (i == 10)
    {
        printf("Number not matchedn");
    }

    return 0;
}
