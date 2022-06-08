#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - checks for leter,lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase and leter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
