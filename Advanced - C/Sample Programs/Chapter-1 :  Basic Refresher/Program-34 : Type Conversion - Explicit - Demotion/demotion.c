/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Fri 23 Jul 2021 20:15:00 
 *   File           : C_Sample_Chapter-1_Program-34_type_conversions.c
 *   Title          : Type conversion - Explicit - Demotion
 *   Description    : Symbols that instructs the compiler to perform specific arithmetic or 
 *                    logical operation on operands. All C operators do 2 things
 *                     - Operates on its operands
 *                     - Returns a value
 *                    Operators play a very crucial role in controlling the system behaviour in 
 *                    general. There are different types of Operators available in C Programming 
 *                    Language. This example demonstrates the behaviour of post and pre 
 *                    increment operators.
 *---------------------------------------------------------------------------------------------*/ 

#include<stdio.h>

int main()
{
    int i;
    int array[5] = {1, 2, 3, 4, 5};

    /* We explicitly demote the unsigned to signed, hence it enters the loop */
    for (i = -1; i < (signed) (sizeof(array) / sizeof(int) - 1); i++)
    {
        printf("%dn", array[i + 1]);
    }

    return 0;
}
