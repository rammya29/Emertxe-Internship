/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 14:30:04 IST
 *   File           : C_sample_Chapter-1_Program-5_datatype_handling_p2.c
 *   Title          : Character datatype handling
 *   Description    : The character datatype is generally used to store printable symbol on screen 
 *                    in variable. This program demonstrates that char literals are stored as ascii 
 *                    values. You can note that, the char datatype can be used to store escape 
 *                    character too!! which when printed shows the corresponding ASCII symbol on 
 *                    the screen.
 *-----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

int main()
{
    char ch1 = '7'; // Octal 7
    char ch2 = 'x8'; // Hexadecimal 8
    char ch3 = 'xA'; // Hexadecimal A which is equivalent to n

    /* This line should print the values of ch1 and ch2 with a new line */
    printf("ch1 = %d, ch2 = %d%c", ch1, ch2, ch3);

    return 0;
}
