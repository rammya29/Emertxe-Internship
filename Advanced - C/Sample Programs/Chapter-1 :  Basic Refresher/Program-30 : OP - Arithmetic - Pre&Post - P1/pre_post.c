/*---------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Fri 23 Jul 2021 12:08:00 
 *   File           : C_Sample_Chapter-1_Program-30_oper_pre_post.c
 *   Title          : Operators - Arithmetic - Pre and Post
 *   Description    : Symbols that instructs the compiler to perform specific arithmetic or 
 *                    logical operation on operands. All C operators do 2 things
 *                     - Operates on its operands
 *                     - Returns a value
 *                    Operators play a very crucial role in controlling the system behaviour in 
 *                    general. There are different types of Operators available in C Programming 
 *                    Language. This example demonstrates the behaviour of post and pre increment 
 *                    operators.
 *----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
    int x = 0;
    int y;

    /* Snippet A */
    y = ++x;
    printf("x = %d, y = %dn", x, y);

    /* Snippet B */
    x = 0;
    y = x++;
    printf("x = %d, y = %dn", x, y);

    return 0;
}
