#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at end
 * @head: head
 * @str: string to add
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *otswag, *f;

	while (str[i])
		i++;
	otswag = malloc(sizeof(list_t));
	if (otswag == NULL)
		return (NULL);
	otswag->str = strdup(str);
	otswag->len = i;
	otswag->next = NULL;
	if (strdup(str) == NULL)
	{
		free(otswag);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = otswag;
		return (otswag);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = otswag;
		return (otswag);
	}
}
