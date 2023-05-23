#include "main.h"

/**
 * _isalpha - checks code for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 * @c: contains value to be compared
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

