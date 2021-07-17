/*------------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 14:20:04 IST
 *   File           : C_Sample_Chapter-1_Program-4_datatype.c
 *   Title          : Character datatype handling
 *   Description    : The character datatype is generally used to store printable symbol on screen 
 *                    in variable. This program demonstrates that char literals are stored as ascii 
 *                    values. You can note that, the char datatype can be used to store numbers 
 *                    too!! which when printed shows the corresponding  ASCII symbol on screen.
 *------------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
    char ch1 = '0';
    char ch2 = 'A';
    char ch3 = 65;

    printf("The character is %c with decimal equivalent %dn", ch1, ch1);
    printf("The character is %c with decimal equivalent %dn", ch2, ch2);
    printf("The character is %c with decimal equivalent %dn", ch3, ch3);

    return 0;
}
