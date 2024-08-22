#include "main.h"

/**
 * print_numbers - Prints the numbers 0 to 9.
 */
int _putchar(char c);

void print_number(void)
{
for (char c = '0'; c <= '9'; c++)
_putchar(c);
_putchar('\n');
}
