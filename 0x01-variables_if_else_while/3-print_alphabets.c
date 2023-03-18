#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{


char A;
char a;

A = 'A';
a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

while (A <= 'Z')
{
putchar(A);
A++;
}


putchar('\n');

return (0);
}
