#include "lists.h"
#include <stdlib.h> 
/**
 * pop_listint - knbijrighr
 * @head: hiuerhgi
 *
 * Return: hiuhgiutrhj
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return 0;

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
