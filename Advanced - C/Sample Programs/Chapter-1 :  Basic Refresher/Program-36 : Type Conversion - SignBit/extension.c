/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 24 Jul 2021 09:50:04
 *   File           : C_Sample_Chapter-1_type_conversions.c
 *   Title          : Type conversion - Sign bit extension
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
    signed char ch1 = -1;
    unsigned char ch2 = 255;

    printf("ch1(signed) = %dn", ch1); // Sign extension happens here
    printf("ch2 = %dn", ch2); // For unsigned numbers 0's are added

    printf("ch1(signed) = %Xn", ch1); // Sign extension happens here
    printf("ch2 = %Xn", ch2); // For unsigned numbers 0's are added

    return 0;
}
