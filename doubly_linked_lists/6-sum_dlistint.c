#include "lists.h"
/**
  * sum_dlistint - all nodes in a linked list
  * @head: head of the list
  * Return: sum of the nodes
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
