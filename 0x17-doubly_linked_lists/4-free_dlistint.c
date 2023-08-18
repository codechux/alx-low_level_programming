#include "lists.h"

/**
 * free_dlistint - frees element
 * @head: variable
 * Return: null
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *element = head;
	dlistint_t *temp;

	while (element != NULL)
	{
		temp = element;
		element = element->next;
		free(temp);
	}
}
