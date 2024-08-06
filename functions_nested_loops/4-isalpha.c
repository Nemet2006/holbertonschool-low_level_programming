#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character be checked
 *
 * Return: 1 for lowercase and uppercase or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
