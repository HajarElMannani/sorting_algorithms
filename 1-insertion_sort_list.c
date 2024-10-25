#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *@list: list to sort
 *Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp, *curr;
listint_t *prevn, *nextn;
if (list == NULL || *list == NULL)
return;
curr = (*list)->next;
while (curr != NULL)
{
temp = curr;
while (temp->prev != NULL && temp->n < temp->prev->n)
{
prevn = temp->prev;
nextn = temp->next;
if (prevn->prev != NULL)
prevn->prev->next = temp;
temp->prev = prevn->prev;
if (nextn != NULL)
nextn->prev = prevn;
prevn->next = nextn;
temp->next = prevn;
prevn->prev = temp;
if (temp->prev == NULL)
*list = temp;
print_list(*list);
}
curr = curr->next;
}
}
