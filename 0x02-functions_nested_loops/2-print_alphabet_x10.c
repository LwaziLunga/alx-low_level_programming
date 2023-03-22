#include "main.h"

/**
 * 
 * print_alphabet -  prints 10 times the alphabet,In lowercase
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
