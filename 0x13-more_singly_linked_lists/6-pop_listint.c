#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int num;

	if (!*head)
	{
		return (0);
	}

	num = (*head)->n;
	listint_t *temp;

	temp = (*head)->next;
	*head = (*head)->next;


	free(temp);


	return (num);
}
