#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the time table n time, starting with 0
 * followed by a new line
 * @n: print tabel n times 
 */

void print_times_table(int n)
{
int f;
int i = 0;

int b;
if (n > 0 && n <=15)
{
while (i <= n)
{
int j = 0;
while (j <= n)
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
_putchar(f / 10 + '0');
_putchar(f % 10 + '0');

}
else if (f >= 100)
{
_putchar(',');
_putchar(' ');
_putchar(f/100 + '0');
b = f % 100;
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
}
j++;
}
i++;
_putchar('\n');
}

}
}
