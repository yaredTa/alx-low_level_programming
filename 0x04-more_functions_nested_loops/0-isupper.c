#include "main.h"

/**
 * _isupper: checks for uppercase character
 * @c: the character to check
 * Return: 1 if c is Uppercase, 0 otherwise
 * 
 */

int _isupper(char c)
{
if (c >= 'A' && c <= 'Z' )
return (1);
else
return (0);
}