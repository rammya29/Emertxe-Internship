/*------------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 13:50:01 IST
 *   File           : C_Sample_Chapter-1_Program-2_reading_input.c
 *   Title          : Reading input from the user
 *   Description    : A simple program allowing the user enter a input from the keyboard and 
 *                    display it on screen
 *------------------------------------------------------------------------------------------------*/

#include <stdio.h>
 
int main()
{
    int number;
 
    printf("Enter a number: ");
    scanf("%d", &number);
 
    printf("You entered: %dn", number);
 
    return 0;
}
