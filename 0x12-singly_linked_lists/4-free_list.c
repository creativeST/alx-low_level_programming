#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * free_list - free list
 * @head: linked list
 */
void free_list(list_t *head)
{
    list_t *lst;

    if (head == NULL)
        return;
    while (head->next)
    {
        lst = head->next;
        free(head->str);
        free(head);
        head = lst;
    }
    free(head->str);
    free(head);
}
