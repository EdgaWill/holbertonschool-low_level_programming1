#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: listint_t argument
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;

		c++;
	}
	return (c);
}
