#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - jfhghiugh
 * @head: jiuhgiuherguh
 *
 * Return: jnvihgiuh
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
