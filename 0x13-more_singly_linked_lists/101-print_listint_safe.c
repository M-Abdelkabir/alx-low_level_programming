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
	size_t count = 0;
	int found = 0;
	const listint_t *one = head, *tow = head, *loop_start = NULL;

	if (head == NULL)
		return (0);
	while (tow != NULL && tow->next != NULL)
	{
		one = one->next;
		tow = tow->next->next;
		if (tow == one)
		{
			found = 1;
			break;
		}
	}
	
	if (found)
	{
		one = head;
		while (tow != one)
		{
			one = one->next;
			tow = tow->next;
		}
		loop_start = tow;
	}
	found = 0;
	one = head;
	while (one)
	{
		printf("[%p] %d\n", (void *)one, one->n);
		count++;
		if (one == loop_start)
			found = 1;
		if (found && one->next == loop_start)
		{
			printf("-> [%p] %d\n",(void *)loop_start, loop_start->n);
			break;
		}
		one = one->next;
	}


	return (count);
}
