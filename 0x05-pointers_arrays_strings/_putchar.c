#include <unistd.h>
/**
 * _putchar - function that writes characters
 *
 * @character: character to be printed out
 *
 * Return: returns an integer value on success
 */

int _putchar(char character)
{
	write(1, &character, 1);

	return (0);
}
