#include <stdio.h>
#include <stdlib.h>

/**
 *main- to print "Programming is like building a multilingual puzzle
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');
return (0);
}
