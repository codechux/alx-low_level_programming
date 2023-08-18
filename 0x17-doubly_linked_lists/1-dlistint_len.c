#include "lists.h"

/**
 * dlistint_len - print elements
 * @h: variable
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *element = h;

	while (element != NULL)
	{
		count++;
		element = element->next;
	}
	return (count);
}
