#include "lists.h"

/*
 *listint_len - kjjfhkjhgrhg
 *@h: jnhghjtrht
 *
 * Return: fbnjfhg
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
