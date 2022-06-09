#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
int f, i = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
f += i;
}
i++;
}
if (i < 10)
_putchar(f + '0');
else if (i >= 10 && i <100)
{
_putchar(f / 10 + '0');
_putchar(f % 10 + '0');
}
else
{
_putchar((f / 100) + '0');
_putchar(((f / 10) % 10) + '0');
_putchar((f % 10) + '0');
}
_putchar('\n');
return (0);
}
