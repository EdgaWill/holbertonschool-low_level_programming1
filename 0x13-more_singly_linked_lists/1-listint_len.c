#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: listint_t argument
 * Return: a
 */

size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
