#include "main.h"

/**
 *
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase,
 * followed by a new line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
int a;

for (a = 0; a <= 9; a++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}


}
