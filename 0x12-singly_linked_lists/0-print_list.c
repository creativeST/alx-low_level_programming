#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of the linked list
 * @h: pointer to the structure
 * Return: return the length of the list
 */
size_t print_list(const list_t *h)
{
    size_t length = 0;

    for(length= 0; h; length++){
    	printf("[%d] %s\n", h->len, h->str);
		h = h->next;
    }
    return (length);
}
