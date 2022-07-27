#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *node;

	node = *h;
	while (node)
	{
		node = *h;
		node = node->next;
		free_list(node);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */

void free_list(listint_t *head)
{
	listint_t *node;

	if (head)
	{
		node = head;
		node = node->next;
		free(node);
		free_list(node);
	}
	free(head);
}
