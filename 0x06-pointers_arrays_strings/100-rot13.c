/**
 * *rot13 - function that encodes a string using rot13
 *
 * @s: string
 *
 * Return: pointer to encoded string
 *
 */
char *rot13(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] > 'm' && s[x] <= 'z') || (s[x] > 'M' && s[x] <= 'Z'))
			{
				s[x] -= 13;
				break;
			}
			s[x] += 13;
			break;
		}
		x++;
	}
	return (s);
}
