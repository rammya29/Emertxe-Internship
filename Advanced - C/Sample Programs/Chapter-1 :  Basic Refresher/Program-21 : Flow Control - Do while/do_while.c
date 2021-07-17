/*----------------------------------------------------------------------------------------------- 
 *   Author         : Rammya Dharshini K 
 *   Date           : Sat 17 Jul 2021 18:50:00 
 *   File           : C_Sample_Chapter-1_Program-21_while.c
 *   Title          : Flow control statement - do while loop
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates do 
 *                    while loop.
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
        printf("Invalid inputn");

        return 1;
    }

    printf("The series is: ");
    /* The condtion is evaluated after entering the loop */
    do
    {
        printf("%d ", i++);
    } while (i < user_input);
    printf("n");

    return 0;
}
