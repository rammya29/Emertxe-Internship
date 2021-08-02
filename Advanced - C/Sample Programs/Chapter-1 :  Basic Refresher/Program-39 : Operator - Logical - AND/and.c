/*--------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K 
 *   Date           : Mon 2 Aug 2021 21:54:00 
 *   File           : C_Sample_Chapter-1_logical_oper_and.c
 *   Title          : Operators - Logical - AND
 *   Description    : Symbols that instructs the compiler to perform specific arithmetic or 
 *                    logical operation on operands. All C operators do 2 things
 *                     - Operates on its operands
 *                     - Returns a value
 *                    Operators play a very crucial role in controlling the system behaviour in 
 *                    general. There are different types of Operators available in C Programming 
 *                    Language. This example demonstrates logical AND operator.
 *-------------------------------------------------------------------------------------------*/   

#include <stdio.h>

int main()
{
    int x = 0;

    /* 
     * All the expressions has to evaluate to true to enter the loop
     * If the first expression results is false the second would not processed
     */
    if (x++ && x++)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    printf("The value of x is %dn", x);

    return 0;
}
