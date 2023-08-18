#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the list
 * @head: variable
 * @n: variable
 * Return: NOde
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *element = *head;

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head ==  NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (element->next != NULL)
	{
		element = element->next;
	}

	element->next = node;
	node->prev = element;
	return (node);
}
