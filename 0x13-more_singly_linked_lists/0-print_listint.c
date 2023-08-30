#include "lists.h"

/**
 * print_listint - Print all the elemnts of listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
