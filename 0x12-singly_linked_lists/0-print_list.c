#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list_t
 * @h: pointer to position in list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	/* struct list_s *current; */
	int count = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)");
		else
			printf("%s", h->str);
		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
