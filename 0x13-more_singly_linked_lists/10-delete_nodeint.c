#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes  node in linked list at a specific index
 * @head: - Is the pointer to first element in list
 * @index: - Pulls the index of the node to be deleted
 * Return: - Prints 1 if Successful or prints -1 if it  Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
