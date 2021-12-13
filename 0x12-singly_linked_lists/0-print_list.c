#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: point
 *
 * Return: list
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
