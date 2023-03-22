#include "main.h"

/**
 * _islower - checks if char is lowercase.
 * @c: is char to be checked
 * Returns 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}

_putchar('\n');
}
