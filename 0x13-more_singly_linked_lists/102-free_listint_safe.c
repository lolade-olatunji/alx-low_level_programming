#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;


	while (current != NULL)
	{
		listint_t *temp = current;
		current = current->next;
		free(temp);
		count++;

		if (current >= temp)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;
	return (count);
}
