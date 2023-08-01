#include "lists.h"
/**
 * pop_listint - This deletes the head node of a linked list
 * @head: - Is the pointer to the first element in the linked list
 * Return: - Pulls data inside the elements that were deleted
 * Or zero if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
