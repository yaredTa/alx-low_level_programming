#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int n = 0;
int f;

while (n < 10)
{
int m = 0;
while (m < 10)
{

f = n * m;
_putchar(f + '0');
_putchar(',');
_putchar(' ');
m++;
}
_putchar('\n');
n++;
}
}
