/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K 
 *   Date           : Fri 23 Jul 2021 11:00:05 
 *   File           : C_Sample_Chapter-1_Program-29_nested_loops.c
 *   Title          : Flow control statement - Nested Loops
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates 
 *                    nested loops
 *----------------------------------------------------------------------------------------------*/
 
#include<stdio.h>

int main()
{
    int i, j;
    int inner_loop_length = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < inner_loop_length; j++)
        {
            printf("*");
        }
        printf("n");
        inner_loop_length++;
    }

    return 0;
}
