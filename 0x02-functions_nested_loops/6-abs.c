#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 */
int _abs(int n)
{
if (n < 0)
n *= -1;
_putchar(n + '0');
return (0);
}
