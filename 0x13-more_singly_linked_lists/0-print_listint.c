#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->);
		current = current->next;
		count++;
	}


	return (count);
}
