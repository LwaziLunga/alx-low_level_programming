#include "main.h"

/**
 * main - check the code.
 *function that checks for alphabetic characters
 * Return: Always 0.
 */

int _isalpha(int c)
{
if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}