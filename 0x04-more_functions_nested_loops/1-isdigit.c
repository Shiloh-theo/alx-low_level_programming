/**
 * _isdigit - checks whether an input is a number or not
 *
 * @c: the input is to be checked
 *
 * return: an integer value. 0 or 1
 */

int _isdigit(int c)
{

	if (c >=48 && c <=57)
		return (1);

	else 
		return (0);
}
