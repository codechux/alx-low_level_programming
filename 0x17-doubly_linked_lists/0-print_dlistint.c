#include "lists.h"

/**
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *element = h;

	while(element != NULL)
	{
		printf("%d\n", element->n);
		element = element->next;
		count++;
	}
	return count;
}
