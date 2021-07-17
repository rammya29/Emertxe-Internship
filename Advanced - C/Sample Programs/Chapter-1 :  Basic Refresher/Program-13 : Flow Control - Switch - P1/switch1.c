/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 16:20:04 
 *   File           : C_Sample_Chapter-1_Program-13_switch.c
 *   Title          : Flow control statement - switch statements
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates switch 
 *                    statements.
 *-----------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main()
{
    char user_input;

    printf("Enter an alphabet [Please enter lower case]: ");
    scanf("%c", &user_input);

    switch (user_input)
    {
        case 'a':
            printf("%c is an voweln", user_input);
            break;
        case 'e':
            printf("%c is an voweln", user_input);
            break;
        case 'i':
            printf("%c is an voweln", user_input);
            break;
        case 'o':
            printf("%c is an voweln", user_input);
            break;
        case 'u':
            printf("%c is an voweln", user_input);
            break;
        default:
            printf("%c is not a voweln", user_input);
            break;
    }

    return 0;
}
