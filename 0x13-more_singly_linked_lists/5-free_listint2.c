#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - jfhghiugh
 * @head: jiuhgiuherguh
 *
 * Return: jnvihgiuh
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp;

	if (head != NULL)
	{
		temp1 = *head;
		while (temp1 != NULL)
		{
			temp = temp1;
			temp1 = temp1->next;
			free(temp);
		}
		*head = NULL;
	}
}
