#include "lists.h"
/**
 * reverse_listint -Rreverses linked list
 * @head: - Is the pointer to first node in list
 * Return: - Is the pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
