/*--------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 24 Jul 2021 10:00:00 
 *   File           : C_Sample_Chapter-1_true_of_false.c
 *   Title          : Testing of the weight of a variable for TRUE or FALSE
 *   Description    : Symbols that instructs the compiler to perform specific arithmetic or 
 *                    logical operation on operands. All C operators do 2 things
 *                     - Operates on its operands
 *                     - Returns a value
 *                    Operators play a very crucial role in controlling the system behaviour in 
 *                    general. There are different types of Operators available in C Programming 
 *                    Language. This example demonstrates an assignment operator and its use 
 *                    with if statement to evaluate TRUE or FALSE.
 *-------------------------------------------------------------------------------------------*/   

#include <stdio.h>

int main()
{
    int x = 10;

    /*
     * The value 0 is assigned to x here making its weight 0
     * So in C any variable which is non zero is TRUE
     * The below evaluation becomes false leading to else part
     */
    if (x = 0) 
    {
        printf("Hello\n");
    }
    else
    {
        printf("World\n");
    }

    return 0;
}
