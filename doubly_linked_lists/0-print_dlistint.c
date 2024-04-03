#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
  * print_dlistint - doubly linked list
  * @h: Head of the list
  * Return: items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for(i= 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
