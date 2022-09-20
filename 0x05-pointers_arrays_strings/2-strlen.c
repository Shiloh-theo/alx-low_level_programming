/**
 * _strlen - displays the length of a string
 *
 * @s: parameter entered
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{

		len++;
		s++;
	}

	return (len);
}
