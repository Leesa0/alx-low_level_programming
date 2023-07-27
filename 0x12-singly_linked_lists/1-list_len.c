#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements no
 * @h: pointer for list_t list
 *
 * Return: number of elements in t
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (t)
	{
		t+;
		t = t->next;
	}
	return (t);
}
