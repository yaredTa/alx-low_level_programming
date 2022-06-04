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
int e;

for (c = 0; c < 8; c++)
{
for (d = c + 1 ; d < 9 ; d++)
{
for (e = d + 1 ; e < 10 ; e++)
{
putchar(c + '0');
putchar(d + '0');
putchar(e + '0');
if (c == 7 && d == 8)
{

}
else
{
putchar(',');
putchar(' ');
}

}
}
}

putchar('\n');
return (0);
}
