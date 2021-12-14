#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: int
 * @av: char
 *
 * Return: p
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, count = 0;
	char *p;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != 0; c++)
		{
			a++;
		}
		a++;
	}
	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
	return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != 0; c++)
		{
			p[count] = av[b][c];
			count++;
		}
		p[count] = 10;
		count++;
	}
	return (p);
}
