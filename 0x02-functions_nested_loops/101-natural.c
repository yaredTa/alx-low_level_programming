#include "main.h"

/**
 * print_times_table - prints the time table n time, starting with 0
 * followed by a new line
 * @n: print tabel n times
 */
int main(void)
{
int f = 0;
for (int i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
f += i;
}
}
printf("%d", f);
}