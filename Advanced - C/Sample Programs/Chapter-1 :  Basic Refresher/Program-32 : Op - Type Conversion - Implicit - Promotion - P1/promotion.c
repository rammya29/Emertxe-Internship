/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K 
 *   Date           : Fri 23 Jul 2021 19:40:00
 *   File           : C_Sample_Chapter-1_Program-32_type_conversions.c
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

#include <stdio.h>

int main()
{
    unsigned int count1 = 10;
    signed int count2 = -1;
    
    /* The smaller type get promoted to bigger, when opertion happens between them */
    if (count1 > count2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
