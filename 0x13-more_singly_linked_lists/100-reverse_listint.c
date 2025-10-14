#include "lists.h"

/**
 * reverse_listint - kjbnih
 * @head: kjbngijgn
 *
 * Return: iuthgijtrjgio
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	next = (*head)->next;
	(*head)->next = NULL;
	while (next != NULL)
	{
		prev = *head;
		*head = next;
		next = next->next;
		(*head)->next = prev;
	}

	return (*head);
}
