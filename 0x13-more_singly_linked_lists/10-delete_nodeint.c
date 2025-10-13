#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - iojiodfjvkjdfov
 * @head: kjvniudfhviu
 * @index: hfuiferhgiuher
 *
 * Return: iuhviuvfhv
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (-1);

	delete = temp->next;
	temp->next = delete->next;
	free(delete);

	return (1);
}
