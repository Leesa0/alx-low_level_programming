#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the data in the list
 * @head: - Is the first node in the linked list
 * Return: - Prints the answer to the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
