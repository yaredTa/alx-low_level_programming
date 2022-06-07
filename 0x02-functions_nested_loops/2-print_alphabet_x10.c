#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main- to print print_alphabet_x10
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
void print_alphabet_x10(void)
{

int b = 1;

while (b <= 10)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

}
