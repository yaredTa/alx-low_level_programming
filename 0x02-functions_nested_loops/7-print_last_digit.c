#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to check
 * return: the value of the last digit
 */
int print_last_digit(int n)
{
int a = n % 10;

_putchar(a + '0');
return (a);
}
