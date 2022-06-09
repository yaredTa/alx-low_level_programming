#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - prints the time table n time, starting with 0
 * followed by a new line
 * @n: print tabel n times
 */
int main(void)
{
int f, i = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
f += i;
}
i++;
}
printf("%d\n", f);
return (0);
}