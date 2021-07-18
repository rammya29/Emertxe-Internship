/*------------------------------------------------------------------------------------------------ 
 *   Author         : Rammya Dharshii K
 *   Date           : Sun 18 Jul 2021 10:30:00 
 *   File           : C_Sample_Chapter-1_Program-23_while.c
 *   Title          : Flow control statement - for loop
 *   Description    : As we all know that a program generally execute in an sequence unless and 
 *                    until we have some condition to change the flow of execution. C Programming 
 *                    Language supports different flow conditions. This program demonstrates 
 *                    for loop.
 *----------------------------------------------------------------------------------------------*/
 
#include <stdio.h>

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
    /* 
     * The initialization section is evaluated first and only once
     * The condtion is evaluated next before entering the loop
     * On true condition the loop body is executed and then
     * The post evaluation expression is evaluated followed by condition check
     */
    for (i = 0; i < user_input; i++)
    {
        printf("%d ", i++);
    }
    printf("n");

    return 0;
}
