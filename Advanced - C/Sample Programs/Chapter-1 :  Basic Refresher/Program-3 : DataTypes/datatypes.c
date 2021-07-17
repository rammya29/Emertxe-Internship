/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 JUL 2021 14:05:04 
 *   File           : C_Sample_Chapter-1_Program-3_datatypes.c
 *   Title          : C basic datatypes
 *   Description    : A simple program exploring the basic C data types. C supports two basic 
 *                    datatypes hold integral and real objects as int and float (single precision). 
 *                    The char falls under the integral category
 *----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>
 
int main()
{
    int account_number;
    float ammount;
    char currency;
 
    account_number = 1024;
    ammount = 100.5;
    currency = '$';
 
    printf("Mr. Xyz with account number %d owes me %f %cn", account_number, ammount, currency);
 
    return 0;
}
