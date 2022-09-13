#include <stdio.h>
/**
 * main - main block
 * Description:program that prints the alphabet in lowercase,
 * and then in uppercase
 * Return: 0
 */
int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch + 1)
		putchar(ch);

	return (0);
}
