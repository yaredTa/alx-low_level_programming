#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
 *
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
