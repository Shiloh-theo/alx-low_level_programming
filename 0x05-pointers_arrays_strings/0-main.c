#include "main.h"
#include <stdio.h>

/**
 * main - check he code
 *
 * return: always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%D\n", n);
	return (0);
}
