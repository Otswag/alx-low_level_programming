#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index?
 * @h: address of linked list
 * @idx: index to place list
 * @n: value of n
 * Return: return new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *fresh;
	unsigned int dex = 1;

	tmp = *h;
	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->prev = NULL;
	fresh->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = fresh;
			return (fresh);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = fresh;
		*h = fresh;
		return (fresh);
	}
	while (tmp->next != NULL && dex != idx)
	{
		tmp = tmp->next;
		dex++;
	}
	if (dex == idx)
	{
		fresh->prev = tmp;
		fresh->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = fresh;
		tmp->next = fresh;
		return (fresh);
	}
	return (NULL);
}
