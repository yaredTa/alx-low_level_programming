#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, f, g;

	j = 1;
	f = 2;
	i = 1;

	while (i <= 50)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		g = j + f;
		j = f;
		f = g;
		i++;
	}

	return (0);
}
