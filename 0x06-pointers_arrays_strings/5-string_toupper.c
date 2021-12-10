/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @c: string to be change
 * Return: C
 */
char *string_toupper(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] >= 97 && c[a] <= 122)
		c[a] = c[a] - 32;
		a++;
	}
	return (c);
}
