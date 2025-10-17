#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - yufyugfyugf
 * @h: kjgyuguygyug
 *
 * Return: rtngjnhhhh
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int found = 0;
	listint_t *one, *tow, *loop_start = NULL;

	if (h == NULL || *h == NULL)
		return (0);
	one = tow = *h;
	while (tow != NULL && tow->next != NULL && found == 0)
	{
		one = one->next;
		tow = tow->next->next;
		if (tow == one)
			found = 1;
	}
	if (found)
	{
		one = *h;
		while (tow != one)
		{
			one = one->next;
			tow = tow->next;
		}
		loop_start = tow;
	}
	found = 0;
	tow = *h;
	while (tow)
	{
		one = tow->next;
		free (tow);
		count++;
		if (tow == loop_start && loop_start != NULL)
		{
			if (one == loop_start)
			{
				free(one);
				count++;
			}
			break;
		}
		tow = one;
	}
	*h = NULL;
	return (count);
}
