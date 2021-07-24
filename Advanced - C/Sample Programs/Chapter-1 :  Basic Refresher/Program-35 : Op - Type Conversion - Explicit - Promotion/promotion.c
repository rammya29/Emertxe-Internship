/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 24 Jul 2021 09:40:04 
 *   File           : C_Sample_Chapter-1_Program-35_type_conversions.c
 *   Title          : Type conversion - Explicit - Promotion
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
    float celcius, farenheit;

    printf("Enter the farenheit value: ");
    scanf("%f", &farenheit);

    /* Explicit promotion of int to float */
    celcius = ((float) 5 / 9) * (farenheit - 32);

    printf("Farenheit %f is %f Celciusn", farenheit, celcius);

    return 0;
}
