/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 JUL 2016 15:30:04
 *   File           : C_sample_Chapter-1_Program-8_type_modifiers.c
 *   Title          : C basic datatypes
 *   Description    : A simple program exploring the basic C data types. C supports two basic 
 *                    datatypes hold integral and real objects as int and float (single precision). 
 *                    The char falls under the integral category. Any variable defined with integral 
 *                    datatypes can be modified for its signedness and width properties. This 
 *                    example demonstrates the storage modification of variable.
 *------------------------------------------------------------------------------------------------*/
 
#include <stdio.h>
 
int main()
{
    /* 
    * Request the compiler to provide a CPU register space if available
    * The allocation become auto on failure to get register space
    */ 
    register int i;
 
    for (i = 0; i < 10; i++)
    {
        puts("hello");
    }

    return 0;
}
