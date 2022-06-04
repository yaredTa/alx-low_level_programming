#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main- to print "Programming is like building a multilingual puzzle
 *
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
int c;
int d;

for (c = 0; c < 9; c++)
{
for (d = c + 1 ; d < 10 ; d++)
{
if (c == 8 && d == 9)
printf("%d%d", c, d);
else
printf("%d%d, ", c, d);
}
}

printf("\n");
return (0);
}
