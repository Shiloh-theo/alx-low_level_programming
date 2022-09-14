#include "main.h"
/**
 * main- a program that prints the alphabets 
 * return 0
 */

void print_alphabet (void)
{
	int var;

	for (var='a'; var<='z'; var++)
	{
		putchar(var);
	}

	putchar ('\n');

	return (0);

}
