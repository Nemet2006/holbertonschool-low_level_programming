#include "main.h"

/**
 * _isdigit - Checks a digit
 * @c: The number be checked
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 48 && c <= 58)
	return (1);
	else
	return (0);
}
