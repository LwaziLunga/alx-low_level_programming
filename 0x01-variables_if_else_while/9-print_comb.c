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
int a = 0;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
if(a!= 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
