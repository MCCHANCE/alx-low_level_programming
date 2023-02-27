#include "main.h"
/**
 * _puts - prints a strings, followed by a new line, to stdout
 * @str: strings to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
_putchar('\n');

}
