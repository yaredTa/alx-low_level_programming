#include <stdio.h>

/**
 *main- to print "Programming is like building a multilingual puzzle
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
int c;

for (c = 0; c < 10; c++)
{
putchar(c + '0');
if (c < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
