#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free a list of type list_t
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
