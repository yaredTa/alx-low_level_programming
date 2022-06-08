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
if (f == 0)
{
_putchar(f + '0');
}
if (f < 10 && f != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(f + '0');


}
else if (f >= 10) 
{
_putchar(',');
_putchar(' ');
_putchar((f / 10) + '0');
_putchar((f % 10) + '0');
}
m++;
}
_putchar('\n');
n++;
}
}
