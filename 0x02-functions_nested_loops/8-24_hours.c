#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int m = 0;

while (m <= 2)
{
int n = 0;
  
while ((n <= 9 && m <= 1) || (n <= 3 && m <= 2))
{
int p = 0;

while (p <= 5)
{
int q = 0;
while (q <= 9)
{

_putchar(m + '0');
_putchar(n + '0');
_putchar(':');
_putchar(p + '0');
_putchar(q + '0');
_putchar('\n');
q++;
}
p++;
}
n++;
}
m++;
}
}
