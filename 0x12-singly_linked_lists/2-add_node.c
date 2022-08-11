#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = i;
	node->next = *head;

	*head = node;

	return (node);
}
