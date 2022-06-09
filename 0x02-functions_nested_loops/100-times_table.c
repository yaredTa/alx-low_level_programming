#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the time table n time, starting with 0
 * followed by a new line
 * @n: print from this number
 */

void print_times_table(int n)
{
int f;
if (n > 0 && n <=15)
{
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
f = i*j;
if (j == 0)
_putchar(f + '0');
if (f < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(f + '0');
}
else if (f >= 10 && f < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(f + '0');
}
else if (f >= 100)
{
_putchar(',');
_putchar(' ');
_putchar(f + '0');
}
}
}
_putchar('\n');
}
}