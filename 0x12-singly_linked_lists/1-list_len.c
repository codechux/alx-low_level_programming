#include "lists.h"

/**
 * list_len - sums the number of elements
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
