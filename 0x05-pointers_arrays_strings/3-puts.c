#include "main.h"

/**
 * _puts - function that prints to the stdout
 *
 * @str: pointer to the memory address
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
