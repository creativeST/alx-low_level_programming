#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to the beginnig of the list
 * @head: linked list
 * @str: string to be listed
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    int length;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    length = 0;
    while (str[length])
    {
        length++;
    }
    new->str = strdup(str);
    new->len = length;
    new->next = (*head);
    (*head) = new;
    return (new);
}
