#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = strlen(s);
for (int i = len - 1; i >= 0l i--) {
putchar(s[i]);
}
putchar('\n');
}
