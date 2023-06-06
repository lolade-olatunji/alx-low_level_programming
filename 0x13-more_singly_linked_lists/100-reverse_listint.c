#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current)
	{
		listint_t *next;
		next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
