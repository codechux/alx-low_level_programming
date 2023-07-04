#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add in the node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *firstNode;
	unsigned int len = 0;

	while (str[len])
		len++;
	firstNode = malloc(sizeof(list_t));
	if (!firstNode)
		return (NULL);
	firstNode->str = strdup(str);
	firstNode->len = len;
	firstNode->next = (*head);
	(*head) = firstNode;
	return (*head);
}
