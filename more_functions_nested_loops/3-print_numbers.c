#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers 0 to 9.
 */
void print_numbers(void)
{
int num;

	for (num = 0; num <= 9; num++)
	_putchar((num % 10) + '0');

	_putchar('\n');
}
