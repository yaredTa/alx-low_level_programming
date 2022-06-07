#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main- to print "Programming is like building a multilingual puzzle
 *
 * Return: 0 if exited properly, non-zero otherwise
*/

int main()
{  
char b[] ="_putchar";
for(int i = 0; i < sizeof b / sizeof *b; i++ )
putchar(b[i]);
putchar('\n');

return (0);
}
