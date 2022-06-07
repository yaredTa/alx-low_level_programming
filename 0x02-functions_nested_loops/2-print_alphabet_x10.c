#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main- to print "Programming is like building a multilingual puzzle
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
int main (void)
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
return (0);

}
