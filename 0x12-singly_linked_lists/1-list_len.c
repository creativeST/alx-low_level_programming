#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - finds the number of nodes in a list
  * @h: linked list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int l;

	for (l = 0; h; l++)
		h = h->next;
	return (l);
}
