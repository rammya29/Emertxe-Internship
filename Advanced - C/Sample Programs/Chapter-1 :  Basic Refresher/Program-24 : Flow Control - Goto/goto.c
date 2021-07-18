/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshini K
 *   Date           : Sat 18 Jul 2021 10:40:04 IST
 *   File           : C_Sample_Chapter-1_Program-24_goto.c
 *   Title          : Flow control statement - goto statement
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates 
 *                    goto statement
 *----------------------------------------------------------------------------------------------*/
 
#include<stdio.h>

int main()
{
    int user_input;
    int i = 0;

    printf("Enter an the length of the number series: ");
    scanf("%d", &user_input);

    if (user_input < 1)
    {
        printf("Invalid input\n");

        return 1;
    }

    printf("The series is: ");

LOOP1:
    if (i != user_input)
    {
        printf("%d ", i++);
        goto LOOP1;
    }
    printf("\n");

    return 0;
}
