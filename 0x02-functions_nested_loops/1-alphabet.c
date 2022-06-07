#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main- to print print_alphabet
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');


}
