#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints elemets in a list
 * @h: linked list variable
 * Return: total number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int chux;

	chux = 0;
	for (; h != NULL; chux++)
	{
		if (h->str == NULL)
		{
			printf("[%d]%s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (chux);
}
