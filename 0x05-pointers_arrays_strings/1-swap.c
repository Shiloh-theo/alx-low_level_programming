/**
 * swap_int - swaps two intigers
 *
 * @a: parameter passed into function
 *
 * @b: parameter passed into function
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
