#include "main.h"

/**
 * _isupper - Checks uppercase character
 * @c: The number be checked
 *
 * Return: 1 if character is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 90)
	return (1);
	else
	return (0);
}
