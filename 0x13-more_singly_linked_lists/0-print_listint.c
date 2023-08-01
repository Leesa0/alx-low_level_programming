#include "lists.h"
/**
 * print_listint - Displays all elements of a linked list
 * @h: Shows the linked list of the - type listint_t, to print
 * Return: Prints no. of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

