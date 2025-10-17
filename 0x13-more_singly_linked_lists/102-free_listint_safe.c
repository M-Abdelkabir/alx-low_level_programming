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
	while (tow != NULL && tow->next != NULL)
	{
		one = one->next;
		tow = tow->next->next;
		if (tow == one)
		{
			one = *h;
			while (tow != one)
			{
				one = one->next;
				tow = tow->next;
			}
			loop_start = tow;
			break;
		}

	}
	tow = *h;
	while (tow)
	{
		one = tow->next;
		if (one == loop_start && loop_start != NULL)
		{
			if (found == 1)
				break;
			found = 1;
		}
		free(tow);
		count++;
		tow = one;
	}
	*h = NULL;
	return (count);
}
