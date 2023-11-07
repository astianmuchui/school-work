#include <stdio.h>

/**
 * Name: Sebastian Muchui
 * Reg: SCP222-1166/2022
 * Course: Control and Instrumentation
 *
 *
 * main - program to check for the sign of a number
 * or if it is zero
 * @print: The number is positive if +ve
 * @print: The number is negative if -ve
 * @print: The number is zero if zero
 * Return: Always Zero
*/

int main(void)
{
    double number;

    printf("Enter a number: "); // Prompt the user

    scanf("%lf", &number); // Get user input

    if (number > 0)
    {
        printf("The Number is positive\n");
    }
    
    else if (number < 0)
    {
        printf("The Number is negative\n");
    }
    
    else if (number == 0)
    {
        printf("The number is zero\n");
    }
    
    return (0);
}

