/*------------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 17 Jul 2021 16:30:04 
 *   File           : C_Sample_Chapter-1_Program-15_switch.c
 *   Title          : Flow control statement - switch statements
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates switch 
 *                    statements.
 *------------------------------------------------------------------------------------------------*/
 
#include<stdio.h>

int main()
{
    char user_input;

    printf("Let me tell you what you typed [Try me]: ");
    scanf("%c", &user_input);

    switch (user_input)
    {
        /* You can provide a range as shown below */
        case 'a' ... 'z':
            printf("You entered a lower case alphabetn");
            break;
        case 'A' ... 'Z':
            printf("You entered an upper case alphabetn");
            break;
        case '0' ... '9':
            printf("You entered a numbern");
            break;
        default:
            printf("Oops :( you caught me!!n");
            break;
    }

    return 0;
}
