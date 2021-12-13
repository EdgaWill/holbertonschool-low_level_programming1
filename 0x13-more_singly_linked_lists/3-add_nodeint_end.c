#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: pointer
 * @n: int
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *oki, *mou = *head;

	oki = malloc(sizeof(listint_t));
	if (oki == NULL)
	return (NULL);

	oki->n = n;
	oki->next = NULL;

	if (*head == NULL)
	{
		*head = oki;
		return (oki);
	}
	while (mou->next)
	mou = mou->next;
	mou->next = oki;
	return (oki);
}
