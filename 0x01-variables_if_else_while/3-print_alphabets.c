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
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
char Alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 26; i++)
{
putchar(alphabets[i]);
putchar(Alph[i]);
}
putchar('\n');

return (0);
}
