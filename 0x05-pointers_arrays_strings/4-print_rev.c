#include "main.h"
/**
 * print_rev - imprime em reversa
 * @s: string
 * Return: 0
 */
voind print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;

	}
	s--;
	for (0 = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
