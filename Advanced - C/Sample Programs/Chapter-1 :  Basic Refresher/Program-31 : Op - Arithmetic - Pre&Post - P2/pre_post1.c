/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Fri 23 Jul 2021 19:30:04 
 *   File           : C_Sample_Chapter-1_Program-31_arith_oper_pre_post.c
 *   Title          : Operators - Arithmetic - Pre and Post
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
    int x = 0;

    /* The value gets incremented but not reflected to x */
    if (x++)
        puts("Yes :)");
    else
        puts("Huh :(");

    printf("x = %dn", x);

    /* The value gets decremented and reflected to x on the same expression */
    if (--x)
        puts("Yes :)");
    else
        puts("Huh :(");

    printf("x = %dn", x);

    return 0;
}
