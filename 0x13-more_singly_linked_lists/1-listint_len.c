#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}


	return (count);
}
