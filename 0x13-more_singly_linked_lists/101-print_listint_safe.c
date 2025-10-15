#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - yufyugfyugf
 * @head: kjgyuguygyug
 *
 * Return: rtngjnhhhh
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
