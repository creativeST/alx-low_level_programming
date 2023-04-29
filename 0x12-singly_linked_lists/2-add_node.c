#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - add a node to the beginnig of the list
 * @head: linked list
 * @str: string to be listed
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newN;
    int length;

    newN = malloc(sizeof(list_t));
    if (!newN)
        return (NULL);

    length = 0;
    while (str[length])
    {
        length++;
    }
    newN->str = strdup(str);
    newN->len = length;
    newN->next = (*head);
    (*head) = newN;
    return (newN);
}
