#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Pointer
 * @str: Pointer
 *
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp = *head;
	size_t len = 0;

	for (len = 0; *(str + len); len++)
	{}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
