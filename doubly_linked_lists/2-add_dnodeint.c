#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint - Adds a node to the beginning
  * @head: head of the linked list
  * @n: value to add
  * Return: pointer to the element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if (*head)
			(*head)->prev = new;
	}
	return (new);
}
