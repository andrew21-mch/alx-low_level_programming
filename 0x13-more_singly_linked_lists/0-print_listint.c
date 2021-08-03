#include "lists.h"
/**
 * print_listint - prints all the elements in a linked list
 * @head: linked list of type listint_t to print
 * 
 * return: number of nodes
 */

size_t print_listint(const listint_t *head)
{
    size_t num = 0;
    while(head)
    {
        printf("%d\n", head->next);
        num++;
        head = head->next;
    }

    return (num);
}
