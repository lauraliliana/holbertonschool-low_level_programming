#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of linked list
 *
 * Return: number of elements in linked list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node_to_f;
while (head)
node_to_f = head->next;
free(head);
head = node_to_f;
}
