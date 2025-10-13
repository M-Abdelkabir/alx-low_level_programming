#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - iojiodfjvkjdfov
 * @head: kjvniudfhviu
 * @idx: hfuiferhgiuher
 * @n: fkgnfenh
 *
 * Return: iuhviuvfhv
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0 || head == NULL || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
