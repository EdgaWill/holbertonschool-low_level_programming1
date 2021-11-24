#include "main.h"

/* _strpbrk - function that searches a string for any of a set of bytes
 * @s: char pointer
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	while (*(s))
	{
		while (accept[a])
		{
			if (*(s) == accept[a])
			{
				break;
			}
			a++;
		}
		if (*(s) == accept[a])
		{
			break;
		}
		a = 0;
		s++;
	}
	if (*(s) == 0 && accept != 0)
	{
		s = 0;
	}
	return (s);
}
