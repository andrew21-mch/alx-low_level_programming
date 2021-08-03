#include "lists.h"
/**
 * add_nodeint- adds a new node at the beginning of a linklist
 * @head: pointer to the first node in the list
 * @data: data to insert in that new node
 * 
 * return: pointer to the new node or Null if its fails
 */

listint_t *add_newint(listint_t **head, const int data)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = data;
	new->next = *head;
	*head = new;

	return (new);
}
