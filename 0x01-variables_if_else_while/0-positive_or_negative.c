#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main is to idenetify the number is negative positive or zero
*return 0 if the code exit fine
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
