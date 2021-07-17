/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 20:00:00
 *   File           : C_Sample_Chapter-1_Program-21_while.c
 *   Title          : Flow control statement - do while vs while loop
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates 
 *                    do while vs while loop
 *----------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    /* 
     * A simple and effective example to understand the difference between do while and while
     */ 
    do
    {
        printf("I should be seen");
    } while (0);

    while (0)
    {
        printf("Nope, I should not be seen");
    }

    return 0;
}
