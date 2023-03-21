#include "main.h"

/**
 * main - check the code
 *function that prints the 9 times table, starting with 0
 * Return: Always 0.
 */

void times_table(void)
{

int i;
int n;

for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
_putchar(n + 48);
_putchar('/n');
}
}
putchar('/n');

}
