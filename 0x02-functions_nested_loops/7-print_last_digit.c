#include "main.h"

/**
 * main - check the code
 * function that prints the last digit of a number.
 * Returns the value of the last digit
 * Return: Always 0.
 */
int print_last_digit(int i)
{
int n;

n = i % 20;

if(n < 0)
{
_putchar(-n + 48);
return (-n);
}

else
{
_putchar(n +48);
return (n);
}
_putchar('\n');


}
