#include "lists.h"

/**
 * get_dnodeint_at_index - get node at nth
 * @head: variable
 * @index: variable
 * Return: null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *element = (dlistint_t *)head;
	unsigned int count = 0;

	while (element != NULL)
	{
		if (count == index)
			return (element);
		element = current->next;
		count++;
	}
	return (NULL);
}
