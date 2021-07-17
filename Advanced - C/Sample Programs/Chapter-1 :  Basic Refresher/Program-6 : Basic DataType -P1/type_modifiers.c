/*------------------------------------------------------------------------------------------------
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 JUL 2021 15:15:04 IST
 *   File           : C_sample_Chapter-1_Program-6_modifiers.c
 *   Title          : C basic datatypes
 *   Description    : A simple program exploring the basic C data types. C supports two basic 
 *                    datatypes hold integral and real objects as int and float (single precision). 
 *                    The char falls under the integral category. Any variable defined with integral 
 *                    datatypes can be modified for its signedness and width properties. This 
 *                    example demonstrates the width modification.
 *-----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>
 
int main()
{
     short int count1;
     int long count2;
     short count3;

     /* Let's assume a 32 bit system */
     printf("count1 can now store only %u bytesn", sizeof(count1));
     printf("count2 can now store only %u bytesn", sizeof(count2));
     printf("count3 can now store only %u bytesn", sizeof(count3));
 
     return 0;
}
