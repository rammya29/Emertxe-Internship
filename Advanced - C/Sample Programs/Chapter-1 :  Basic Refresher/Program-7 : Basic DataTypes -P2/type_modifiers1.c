/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 14:20:04 IST
 *   File           : C_Sample_Chapter-1_Program-1_type_modifiers.c
 *   Title          : C basic datatypes
 *   Description    : A simple program exploring the basic C data types. C supports two basic 
 *                    datatypes hold integral and real objects as int and float(single precision). 
 *                    The char falls under the integral category.Any variable defined with integral 
 *                    datatypes can be modified for its signedness and width properties. This 
 *                    example demonstrates the sign modification.
 *-----------------------------------------------------------------------------------------------*/
 
#include<stdio.h>
 
int main()
{
    char num1;
    unsigned char num2;
 
    num1 = -1;
    num2 = -1;
 
    /* Instruct the printf to print the number in decimal for which default is signed */
    printf("num1 = %dn", num1);
    /* Instruct the printf to print the number in unsigned decimal */
    printf("num2 = %un", num2);
 
    /* The type conversion fundamental come into picture here */
    /* The smaller type get promoted to bigger when opertion happens between them */
    printf("num1 = %dn", num1 & 0xFF);
    printf("num2 = %dn", num2 & 0xFF);
 
    return 0;
}
