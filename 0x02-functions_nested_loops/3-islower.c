#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * checks for lowercase character.
 * Return 1 if it lower case and 0 if not.
*/
int _islower(int c)
{
if (c >= 97 && c<= 122)
return (1);
else
return (0);
}
