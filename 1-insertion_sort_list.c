#include "sort.h"

/**
 *1-insertion_sort_list.c - function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 *@list: list to sort
 *Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *temp, *curr;
  listint_t *prev_node, *next_node;
  if (list == NULL || *list == NULL)
    return;
  curr = (*list)->next;
while (curr != NULL)
    {
        temp = curr;
        while (temp->prev != NULL && temp->n < temp->prev->n)
        {
           
           prev_node = temp->prev;
           next_node = temp->next;

           
            if (prev_node->prev)
                prev_node->prev->next = temp;
            temp->prev = prev_node->prev;

           
            if (next_node)
                next_node->prev = prev_node;
            prev_node->next = next_node;

           
            temp->next = prev_node;
            prev_node->prev = temp;

           
            if (!temp->prev)
                *list = temp;

           
            print_list(*list);
        }
       
        curr = curr->next;
    }
}
