/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Fri 23 Jul 2021 19:45:00 
 *   File           : C_Sample_Chapter-1_Program-33_type_conversions.c
 *   Title          : Type conversion - Implicit - Promotion
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

    /* 
     * sizeof returns unsigned value. Comparing a signed and
     * unsigned value yields to type promotion. Signed type
     * gets converted to unsigned. Here -1 becomes a big positive
     * value. Hence comparison fails.
     * In short (-1 < 4u) is false.
     */
    for (i = -1; i < sizeof(array) / sizeof(int) - 1; i++)
    {
        printf("%d\n", array[i + 1]);
    }

    printf("Hello\n");

    return 0;
}
