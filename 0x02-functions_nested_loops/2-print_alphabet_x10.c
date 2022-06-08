#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print print_alphabet_x10 is to print the alpahbet 10 times
 *
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
b++
}

}
