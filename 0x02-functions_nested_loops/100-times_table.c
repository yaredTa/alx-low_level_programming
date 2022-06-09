#include "main.h"

/**
 * print_times_table - prints the time table n time, starting with 0
 * followed by a new line
 * @n: print tabel n times
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
    i = 0;
		while (i <= n)
		{
        j = 0;
			while (j <= n)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
            j++;
			}
            i++;
			_putchar('\n');
		}
	}
}
