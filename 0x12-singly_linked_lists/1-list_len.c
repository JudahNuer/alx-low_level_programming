#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elements list
 * @h: position in list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	/* struct list_s *current; */
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
