#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - knbijrighr
 * @head: hiuerhgi
 * @index: iojgjg
 * Return: hiuhgiutrhj
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
