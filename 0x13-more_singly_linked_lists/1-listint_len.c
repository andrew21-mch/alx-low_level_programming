#include "lists.h"

/**
 * listint_len returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * 
 * Return: number nodes
 */
size_t listint_len(const listint_t *head)
{
    size_t num = 0;
    while(head)
    {
        num++;
        head = head->next;

    }
    return (num);
}
