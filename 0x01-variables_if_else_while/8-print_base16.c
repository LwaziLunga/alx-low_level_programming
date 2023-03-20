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
char alpha;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}


for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');

return (0);
}
